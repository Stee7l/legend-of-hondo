#include "HeightMap.h"

HeightMap::HeightMap() {
	planes = (HeightMapPlane**) malloc(PLANESSIZE * PLANESSIZE * sizeof(HeightMapPlane*));

	for (int i = 0; i < PLANESSIZE * PLANESSIZE; ++i) {
		planes[i] = NULL;
	}

	reader = NULL;
}

HeightMap::~HeightMap() {
	if (reader != NULL) {
		delete reader;
		reader = NULL;
	}

	for (int i = 0; i < PLANESSIZE * PLANESSIZE; ++i) {
		HeightMapPlane* plane = planes[i];

		if (plane != NULL)
			delete plane;
	}

	free(planes);
}

void HeightMap::load(const string& path) {
	reader = new FileReader(new File(path));
}

float HeightMap::getHeight(float x, float y) {
	//return getHeightFrom(reader, x, y);

	int planePosition = getPlanePosition(x, y);

	HeightMapPlane* plane = planes[planePosition];
	if (plane == NULL)
		plane = streamPlaneAt(x, y);

	int width = (int) x % PLANEWIDTH;
	int height = (int) y % PLANEWIDTH;

	if (width < 0)
		width = PLANEWIDTH + width;

	if (height < 0)
		height = PLANEWIDTH + height;

	return plane->getHeight(width, height);
}

float HeightMap::getHeightFrom(Reader* file, float x, float y) {
	if (x < -7680 || x > 7680 || y < -7680 || y > 7680)
		return 0;

	byte buffer[sizeof(float)];

	int tableX = (int) x + 7680;
	int tableY = (int) y + 7680;

	uint32 offset = ((7680 * 2 + 1) * tableX + tableY) * sizeof(float);

	file->read(buffer, offset, sizeof(float));

	return *((float*) buffer);
}

HeightMapPlane* HeightMap::streamPlaneAt(float x, float y) {
	int planePosition = getPlanePosition(x, y);

	HeightMapPlane* plane = NULL;

	if (planeQueue.size() < PLANELIMIT) {
		plane = planes[planePosition] = new HeightMapPlane(planePosition, PLANEWIDTH);
	} else {
		plane = planeQueue.remove();
		planes[plane->getIndex()] = NULL;

		plane->setIndex(planePosition);
	}

	planeQueue.add(plane);

	int planeOffset = planePosition * PLANEWIDTH * PLANEWIDTH;
	reader->read(plane->getBuffer(), planeOffset, PLANEWIDTH * PLANEWIDTH);

	return plane;
}

int HeightMap::getPlanePosition(float x, float y) {
	int planeX = (int) (x + ORIGOSHIFT) / PLANEWIDTH;
	int planeY = PLANESSIZE - ((int) (y + ORIGOSHIFT) / PLANEWIDTH) - 1;

	return planeX + planeY * PLANESSIZE;
}

void HeightMap::convert(const string& path) {
	Reader* reader = new FileReader(new File(path));
	Writer* writer = new FileWriter(new File("converted_" + path));

	byte buffer[PLANEWIDTH * HEIGHTSIZE];

	byte emptybuffer[PLANEWIDTH * HEIGHTSIZE];

	for (int i = 0; i < PLANEWIDTH * HEIGHTSIZE; ++i)
		emptybuffer[i] = 0;

	// first 2 lines
	for (int i = 0; i < 2 * 64; ++i) {
		for (int j = 0; j < PLANEWIDTH; ++j)
			writer->write(emptybuffer, PLANEWIDTH * HEIGHTSIZE);
	}

	int planeIndexX = 2;
	int planeIndexY = 2;

	// inner 60 lines
	for (int i = 0; i < 60; ++i) {
		// 2 beginning plane
		for (int j = 0; j < 2 * PLANEWIDTH; ++j)
			writer->write(emptybuffer, PLANEWIDTH * HEIGHTSIZE);

		// inner 60 planes
		for (int j = 0; j < 60; ++j) {
			cout << "\r writing(" << planeIndexX << ", " << planeIndexY << ")";

			float plane[PLANEWIDTH * PLANEWIDTH];
			readPlaneForConversion(reader, plane, planeIndexX - 2, planeIndexY);

			writer->write((byte*) plane, PLANEWIDTH * PLANEWIDTH * HEIGHTSIZE);

			++planeIndexX;
		}

		planeIndexX = 2;
		++planeIndexY;

		// 2 ending plane
		for (int j = 0; j < 2 * PLANEWIDTH; ++j)
			writer->write(emptybuffer, PLANEWIDTH * HEIGHTSIZE);
	}

	//last 2 lines
	for (int i = 0; i < 2 * 64; ++i) {
		for (int j = 0; j < PLANEWIDTH; ++j)
			writer->write(emptybuffer, PLANEWIDTH * HEIGHTSIZE);
	}

	writer->close();
}

void HeightMap::readPlaneForConversion(Reader* file, float* buffer, int planeX, int planeY) {
	int tableX = planeX * PLANEWIDTH - 7680;
	int tableY = (60 - planeY) * PLANEWIDTH - 7680;

	uint32 offset = ((7680 * 2 + 1) * tableX + tableY) * sizeof(float);

	for (int y = 0; y < PLANEWIDTH; ++y) {
		for (int x = 0; x < PLANEWIDTH; ++x) {
			*(buffer++) = getHeightFrom(file, tableX + x, tableY - y);
		}
	}
}

