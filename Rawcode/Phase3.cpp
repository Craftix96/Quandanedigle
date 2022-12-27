#include <Windows.h>

 
#define SCREEN_HEIGHT 1080
#define SCREEN_WIDTH 1920
 
HICON icons[] = {
	LoadIcon(NULL, IDI_ERROR),
	LoadIcon(NULL, IDI_WARNING),
	LoadIcon(NULL, IDI_INFORMATION),
	LoadIcon(NULL, IDI_QUESTION)
};
 
size_t s_icons = sizeof(icons);
 
void DrawIcons() {
	HWND hWnd = GetDesktopWindow();
	HDC hdc = GetWindowDC(hWnd);
 
	DrawIcon(hdc, rand() % SCREEN_WIDTH, rand() % SCREEN_HEIGHT, icons[rand() % s_icons]);
 
	ReleaseDC(hWnd, hdc);
}
 
int main() {
	FreeConsole();
 
	while (1) {
		DrawIcons();
	}
	return 0;
}