#if 0
#include<windows.h>
#include<stdio.h>
LRESULT CALLBACK MyWndproc(HWND, UINT, WPARAM, LPARAM);
int main() {
	
	WNDCLASS wc = { 0, };
	wc.lpszClassName = L"MyWnd";
	wc.hbrBackground =
		(HBRUSH)GetStockObject(
			WHITE_BRUSH);
	wc.hCursor = LoadCursor(0, IDC_ARROW);
	wc.lpfnWndProc = MyWndproc;
	RegisterClass(&wc);

	CreateWindow(L"MyWnd", L"Hello Window",
		WS_OVERLAPPEDWINDOW | WS_VISIBLE,
		100, 100, 400, 400, 0, 0, 0, 0);
	MSG msg;
	while(1) {
		GetMessage(&msg, 0, 0, 0);
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}
LRESULT CALLBACK MyWndProc(
	HWND hWnd, UINT iMsg, WPARAM wParam, LPARAM  lParam) {
	static wchar_t buffer[32] = { 0, };
	switch (iMsg) {
	case WM_CHAR:
		wsprintf(buffer, L"%c", LOWORD(wParam));
		SetWindowText(hWnd, buffer);
		return 0;
	case WM_MOUSEMOVE:
		wsprintf(buffer, L"(%d,%d)"),
			LOWORD(lParam), HIWORD(lParam);
		SetWindowText(hWnd, buffer);
		return 0;
	}
	return DefWindowProc(hWnd, iMsg, wParam, lParam);
}
#endif
#if 0
#include <stdio.h>
struct vision {
	double left;
	double right;
	double middle[100];
};
vision* exchange(vision* robot) {
	printf("%zd,%p%p\n", sizeof(robot), &robot, robot);
	double temp;
	temp = robot->left;
	robot->left = robot->right;
	robot->right = temp;
	return robot;
}
int main(void) {
	vision robot = { 15.5,20.0 };
	printf("%zd,%p\n", sizeof(robot), &robot);
	vision* vp = exchange(&robot);
	printf("¹Ù²ï ½Ã·Â :  %.1lf%.1lf\n", robot.left, robot.right);
}
#endif
#include<stdio.h>
void add_ten(int b, int* B) {
	b = b + 10;
	*B = *B + 10;//B[0]:%d\n",b,B[0];
}
int main(void) {
	int a = 10;
	int A[1] = { 100 };
	add_ten(a, A);//int b=a,call by value
	//int *B=&A[0]:%d\n",a,A[0]);
}
