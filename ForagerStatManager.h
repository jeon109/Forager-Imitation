#pragma once
#include "singletonBase.h"

#define UPGRADE_MAX 3

struct tagForagerHp
{
	RECT ForagerHpRc;
	string imgName;
	bool _isHp;

};

struct tagStamina
{
	RECT staminaRc;
	string imgName;
	
};
struct tagExp
{
	RECT expRc;
	string imgName;
	
};

class ForagerPlayer;
class ForagerStatManager :public singletonBase< ForagerStatManager>
{
private:
	bool superMode;


	RECT _rcForagerHpBar;				//체력바 렉트
	float _x, _y;					//체력바 위치좌표
	float _width;					//체력바 가로길이
	float _height;					//체력바 세로길이
	float _staminaImgSizeMax;		//최대 스테미나 
	float _staminSizeCurrent;		//현재 스테미나 

	tagStamina* _foragerStamina;
	ForagerPlayer* _player;

	// 레밸업 관련
	tagExp* _foragerExp;
	int needExp[65];
	int currentExp;
	int level;
	bool levelUp;

	
	float _expImgSizeMax;
	
	// 강화 관련
	int _hammerUpgradeCount;
	int _swordUpgradeCount;
	int _bowUpgradeCount;
	int _staffUpgradeCount;
	int _flagUpgradeCount;
	float _enhancingRatio[UPGRADE_MAX];	// 강화 데미지 증폭 비율


	
	image* _levelNum[10];
	
	bool inven_open;
	int gameOverCount;
	bool _playerDead;

	
public :

	HRESULT init();
	void release();
	void update();
	void render(HDC hdc);

	vector<tagForagerHp*> _foragerHp;
	void ForagerPlayerinfo(ForagerPlayer* _q) {
		_player = _q;
	}
	void setinvenopen(bool open) {
		inven_open = open;
	}
	//플레이어 스테미나 관련 카운트
	int playerStaminaCount;
	bool staminaLoss;

	//체력바 위치 세팅하기
	void setPos(float x, float y) { _x = x; _y = y; }

	//경험치바 최적화
	void IncreaseExp(int exp);
	void RecoverHp(int hp);
	void setRight(int num);

	int GetCurrentExp() { return currentExp; };
	int GetLevel() { return level; };
	int GetStamina() { return _staminSizeCurrent; };
	int GetStaminaMax() { return _staminaImgSizeMax; };
	float GetSpRatio() { return _staminSizeCurrent / _staminaImgSizeMax; };

	void SetLinkPlayer(ForagerPlayer* p_player) { _player = p_player; };
	void SetCurrentExp(int exp) { currentExp = exp; };
	void SetLevel(int lev) { level = lev; };
	void SetStamina(int stam) { _staminSizeCurrent = stam; };
	void SetStaminaMax(int stamBack) { _staminaImgSizeMax = stamBack; };
	bool GetSuperMode() {return superMode;	};

	// 강화 get set
	float GetEnhanceRatio(int p_num) { return _enhancingRatio[p_num]; };
	int GetHammerUpgradeCount() { return _hammerUpgradeCount; };
	int GetSwordUpgradeCount() { return _swordUpgradeCount; };
	int GetBowUpgradeCount() { return _bowUpgradeCount; };
	int GetFlagUpgradeCount() { return _flagUpgradeCount; };

	void SetHammerUpgradeCount(int p_num) { _hammerUpgradeCount = p_num; };
	void SetSwordUpgradeCount(int p_num) { _swordUpgradeCount = p_num; };
	void SetBowUpgradeCount(int p_num) { _bowUpgradeCount = p_num; };
	void SetFlagUpgradeCount(int p_num) { _flagUpgradeCount = p_num; };
};

