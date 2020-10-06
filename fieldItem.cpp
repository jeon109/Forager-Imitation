#include "stdafx.h"
#include "fieldItem.h"

void fieldItem::setFieldItem(POINT ptPos, string itemKey)
{
	x = ptPos.x + RANDOM->range(-30, 30);
	y = ptPos.y + RANDOM->range(-30, 30);
	objKey = itemKey;
	dropItem.itemKey = itemKey;
	layer = LAYER::OBJECT;
	tag = TAG::ITEM;
	maxHp = 100;
	currentHp = 100;
	objFrameX = 0;
	objFrameY = 0;
	rc = RectMakeCenter(x, y, 56, 56);
}

void fieldItem::collision()
{
	currentHp = 0;
}

void fieldItem::render(HDC hdc)
{
	IMAGEMANAGER->render(objKey, hdc, CAMERA->GetRelativeX(rc.left), CAMERA->GetRelativeY(rc.bottom));
}
