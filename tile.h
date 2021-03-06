#pragma once

#include "gameObject.h"
#include <algorithm>

#define TILEX 12
#define TILEY 12
#define TILESIZE 56
#define MAPX 7
#define MAPY 7
#define MAPSIZE MAPX*MAPY
#define MAPTILEX MAPX*TILEX
#define MAPTILEY MAPY*TILEY
#define RESRATIOLIMIT 0.2
#define RESGENTIME 300

class tile : public gameObject {
public:
	string terrKey;
	//image* img;
	int terrainFrameX;
	int terrainFrameY;
	bool hasUnit;
	bool canPass;

public:
	void render(HDC hdc) override;
};


