#include"..\Header.h"
class Event
{
private:
	HWND hWnd_ = {};
	HDC hDC_ = {};
	PAINTSTRUCT paintStruct_ = {};
	RECT rect_ = {};

	LPARAM lParam_ = 0;
	WPARAM wParam_ = 0;

	const int MAX_WIDTH_ = 500;
	const int MAX_HEIGHT_ = 500;
public:
	Event(HWND hWnd,LPARAM lParam, WPARAM wParam) {
		this->hWnd_ = hWnd;
		lParam_ = lParam;
		wParam_ = wParam;
		GetWindowRect(hWnd_, &rect_);
	}
	~Event() {
		EndPaint(hWnd_, &paintStruct_);
	}
	void handlingMessage(UINT uMsg);
	void getSizeWindow();
};

