#include "stdafx.h"
#include "targetingBox.h"


HRESULT targetingBox::init()
{
	IMAGEMANAGER->addFrameImage("TargetingBox", "Images/이미지/GUI/img_UI_TargetingBox.bmp", 72, 21, 4, 1, true, RGB(255, 0, 255));

	_rcTargetBox = { 0, 0, 0, 0 };
	_minSize = -4;
	_maxSize = 4;
	_currentSize = 0;
	_zoomSpeed = 1;
	_isCursorOn = false;
	_isZoomIn = true;
	_isTargetting = false;
	_currentCount = 0;
	_count = 0;
	_targetID = 10000;
	_zommSpeed_count = 0;
	return S_OK;
}

void targetingBox::update()
{
	// 타겟팅 박스 줌인 줌아웃
	if (_isTargetting) {
		_zommSpeed_count++;
		if (_zommSpeed_count > 1) {
			_zommSpeed_count = 0;

			if (_currentCount++ > _count) {
				_currentCount = 0;

				if (_isZoomIn) {
					_currentSize += _zoomSpeed;
					if (_currentSize >= _maxSize)
						_isZoomIn = false;
				}
				else {
					_currentSize -= _zoomSpeed;
					if (_currentSize <= _minSize)
						_isZoomIn = true;
				}

				_rcTargetBox.bottom += _currentSize;
				_rcTargetBox.top -= _currentSize;
				_rcTargetBox.left -= _currentSize;
				_rcTargetBox.right += _currentSize;
			}
		}
	}
}

void targetingBox::render(HDC hdc)
{
	if (_isTargetting) {
		if (_isRelative) {
			IMAGEMANAGER->findImage("TargetingBox")->frameRender(hdc, CAMERA->GetRelativeX(_rcTargetBox.left), CAMERA->GetRelativeY(_rcTargetBox.top), 0, 0);
			IMAGEMANAGER->findImage("TargetingBox")->frameRender(hdc, CAMERA->GetRelativeX(_rcTargetBox.right), CAMERA->GetRelativeY(_rcTargetBox.top), 1, 0);
			IMAGEMANAGER->findImage("TargetingBox")->frameRender(hdc, CAMERA->GetRelativeX(_rcTargetBox.right), CAMERA->GetRelativeY(_rcTargetBox.bottom), 2, 0);
			IMAGEMANAGER->findImage("TargetingBox")->frameRender(hdc, CAMERA->GetRelativeX(_rcTargetBox.left), CAMERA->GetRelativeY(_rcTargetBox.bottom), 3, 0);
		}
		else {

			IMAGEMANAGER->findImage("TargetingBox")->frameRender(hdc, _rcTargetBox.left, _rcTargetBox.top, 0, 0);
			IMAGEMANAGER->findImage("TargetingBox")->frameRender(hdc, _rcTargetBox.right, _rcTargetBox.top, 1, 0);
			IMAGEMANAGER->findImage("TargetingBox")->frameRender(hdc, _rcTargetBox.right, _rcTargetBox.bottom, 2, 0);
			IMAGEMANAGER->findImage("TargetingBox")->frameRender(hdc, _rcTargetBox.left, _rcTargetBox.bottom, 3, 0);
		}
	}
}

void targetingBox::SetTarget(RECT rcTarget, int moveDistance, int id, int narrow, bool isRelative)
{
	_isRelative = isRelative;
	//if (SCENEMANAGER->GetCurrentSceneName() == "시작 화면") {
		if (_targetID != id) {
			if (SOUNDMANAGER->isPlaySound("커서음1")){
				SOUNDMANAGER->play("커서음2");
			}
			else {
				SOUNDMANAGER->play("커서음1");
			}
		}
	//}
	if (id != _targetID) {
		_minSize = -moveDistance;
		_maxSize = moveDistance;
		_targetID = id;
		_isCursorOn = true;
		_rcTargetBox = RectMake(rcTarget.left - 14 + narrow, rcTarget.top - 14 + narrow, rcTarget.right - rcTarget.left + 10 - narrow, rcTarget.bottom - rcTarget.top + 10 - narrow);
		_isTargetting = true;
		_currentSize = 0;
		_isZoomIn = true;
	}
}

void targetingBox::CursorOut()
{
	_isCursorOn = false;
}

void targetingBox::RemoveTarget()
{
	_isCursorOn = false;
	_isTargetting = false;
	_targetID = 10000;
}
