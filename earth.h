#pragma once
#include "gamemap.h"
#include "unit.h"
#include "building.h"
#include "resource.h"
#include "fieldItem.h"
#include "ForagerPlayer.h"
class ForagerPlayer;

class earth : public gamemap
{
private:
	vector<tile> _vTile;
	ForagerPlayer* _player; // �÷��̾�

private:
	image* watertile;
	image* plaintile;
	image* plainedge;
	image* wave;
	image* underwater;
	int _count;
	int _frameCount;
	int wavetick;
public:
	HRESULT init();
	void release();
	void update();
	void render(HDC hdc);

	void mapSetup();
	void setRandomObject();
	float getResRatio();
	void setIsland(int x, int y);
	int GetIslandX(int index);
	int GetIslandY(int index);
	void setLinkPlayer(ForagerPlayer *player) { _player = player; };
public:
	vector<tile> GetTiles() { return _vTile; }
	tile GetTile(int index) { return _vTile[index]; };
	tile* GetTileP(int index) { return &_vTile[index]; };
	RECT GetTileRc(int index) { return _vTile[index].rc; }
	tile* tileMouseTarget();
	int tileMouseTargetIndex();
	void setTileHasUnit(int index) { 
		_vTile[index].hasUnit = true;
		_vTile[index].canPass = false;
	};
};

