#pragma once
#include "enemy.h"
#include "Astar.h"
#define MOVERANGE 2
#define MOVESPEED 1


enum COWSTATE
{
	IDLE3,
	WALK,
	DASH,

};
class cow : public enemy
{
private:
	int cowHitCount;
	int cowHitWaitCount;
	int searchCount;
	int cowDashRange;
	bool tryAttack;

	bool isattacking;


private:
	COWSTATE _state2;
public:
	HRESULT init();
	void update();
	void render(HDC hdc) override;

	void cowAnimation();
	void cowMove();
	void cowAttack();
	void cowLookDirection();
	



	
};

