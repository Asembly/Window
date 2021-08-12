#include "Event.h"

void Event::handlingMessage(UINT uMsg) {
	switch (uMsg) {
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	case WM_CLOSE:
		DestroyWindow(hWnd_);
		break;
	case WM_PAINT:
		hDC_ = BeginPaint(hWnd_, &paintStruct_);
		FillRect(hDC_, &paintStruct_.rcPaint, (HBRUSH)COLOR_WINDOW+26);
		HWND button = CreateWindow(L"Button", L"PUSH", WS_CHILD | WS_VISIBLE | WS_BORDER,0,0, 100, 40, hWnd_, NULL, NULL, NULL);
		break;
	}
}