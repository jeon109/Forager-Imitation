#pragma once
#include "enemy.h"
#include "Astar.h"
#define MOVERANGE 2
#define MOVESPEED 1

class skull :public enemy
{
private : 
private : 
	int skullMoveCount;
	int skullIdleCount;
	int skullAttackRange;
	int searchCount;
	int skullHitCount;
	int skullHitWaitCount;
	bool hitPlayer;
	bool tryAttack;
	POINT _destination;

	int nonAttacktime;
	bool isattacking;

	int Atk;

public :
	HRESULT init();
	 void update() override;
	 void render(HDC hdc) override;
	 void skullMove();
	 //void move(vector<int> vDestTileIndex) override;
	 void canAttackCheck();
	 void skullAnimation();
	 void skullLookDirection();
	
	 /*int FindSkullTilePos();
	 bool CanCheckMove(int index);
	 void CheckSkullTile();
	 void CheckCollision();*/

};
