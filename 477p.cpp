#if 0
#include <stdio.h>
struct student
{
	int num;
	double grade;
};
int main(void)
{
	struct student s1;

	s1.num = 2;
	s1.grade = 2.7;
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1f\n", s1.grade);
	return 0;
}
#endif
#if 0
#include <stdio.h>
struct student
{
	int id;
	char name[20];
	double grade;
};
int main(void)
{
	struct student s1 = { 315,"홍길동",2.4 },
		s2 = { 316,"이순신",3.7 },
		s3 = { 317,"세종대왕",4.4 };
	struct student max;
	max = s1;
	if (s2.grade > max.grade)max = s2;
	if (s3.grade > max.grade)max = s3;
	printf("학번 : %d\n", max.id);
	printf("이름 : %s\n", max.name);
	printf("학wja : %.1lf\n", max.grade);
	return 0;
}
#endif
#if 0
#include <stdio.h>
struct vision
{
	double left;
	double right;
};
struct vision exchange(struct vision rovot);
int main(void)
{
	struct vision robot;
	printf("시력 입력 : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);
	return 0;
}
struct vision exchange(struct vision robot)
{
	double temp;
	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;
	return robot;
}
#endif
#if 0
#include<stdio.h>
struct vision
{
	double left;
	double right;
	double middle[100];
};
void *exchange(vision* robot) {
	printf("%zd,%p,%p\n", sizeof(robot),&robot);
	double temp;
	temp = robot->left;
	robot->left = robot->right;
	robot->right = temp;
	return robot;
}
int main(void) {
	vision robot = { 15.5,20.0 };
	printf("%zd\n", sizeof(robot), &robot);
	vision* vp = exchange(&robot);
	printf("바뀐 시력 : %.1lf%.1lf\n", robot.left, robot.right);
}
#endif
#if 0
#include<stdio.h>
struct score
{
	int kor;
	int eng;
	int math;
};
int main(void)
{
	struct score yuni = { 90,80,70 };
	struct socre *ps = &yuni;

	printf("국어 : %d\n", (*ps).kor);
	printf("영어 : %d\n", ps->eng);
	printf("tngkr : %d\n", ps->math);

	return 0;
}
#endif
#if 0
#include <stdio.h>
struct address
{
	char name[20];
	int age;
	char tel[20];
	; char addr[80];
};
int main(void)
{
	struct address list[5] = {
		{"홍길동",23,"111-1111","울릉도 독도"},
		{"이순신",35,"222-2222","서울 건천동"},
		{"장보고",19,"333-3333","완도 청해진"},
		{"유관순",15,"444-4444","충남 천안"},
		{"안중근",45,"555-5555","황해도 해주"}
	};
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n",
			list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
}
#endif
#if 0
#include <stdio.h>
struct address
{
	char name[20];
	int age;
	char tel[20];
	; char addr[80];
};
void print_list(struct address* lp);

int main(void)
{
	struct address list[5] = {
		{"홍길동",23,"111-1111","울릉도 독도"},
		{"이순신",35,"222-2222","서울 건천동"},
		{"장보고",19,"333-3333","완도 청해진"},
		{"유관순",15,"444-4444","충남 천안"},
		{"안중근",45,"555-5555","황해도 해주"}
	};
	print_list(list);
	return 0;
}
void print_list(struct address* lp)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n",
			(lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
	}
}

#endif
#if 0
#include <stdio.h>
struct list
{
	int num;
	struct list* next;
};
int main(void)
{
	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
	struct list* head = &a, * current;
	a.next = &b;
	b.next = &c;
	printf("head->num : & %d\n", head->num);
	printf("head ->next->num : %d\n", head->next->num);
	printf("list all : ");
	current = head;
	while (current != NULL)
	{
		printf("%d ", current->num);
		current = current->nexty;
	}
	printf("\n");
}
#endif
#if 0
#include <windows.h>
#include <stdio.h>
int main() {
	CreateWindow( L"button", L"'PUSH ME!",
		WS_OVERLAPPEDWINDOW I WS_VISIBLE,
		100, 100, 200, 200, 0, 0, 0, 0 );
	MSG msg;
	while (1) {
		GetMessage(&msg, 0, 0, 0);
		printf("-");
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}
#endif
#if 0
#include <windows.h>
#include <stdio.h>
int main() {
	WNDCLASS wc = { 0, };
	wc.lpszClassName = L"MyWnd";
	wc.hbrBackground =
		(HBRUSH)GetStockObject(
			WHITE_BRUSH);
	Wc.lpfnWndProc = DefWindowProc;
	RegisterClass(&wc);
	CreateWindow(L"Mywnd", L"'Hello Window",
		WS_OVERLAPPEDWINDOW I WS_VISIBLE,
		100, 100, 200, 200, 0, 0, 0, 0);
	MSG msg;
	while (1) {
		static wchar_t buffer[32] = { 0, };
		GetMessage(&msg, 0, 0, 0);
		switch (msg.message) {
		case WM_CHAR:
			wsprintf(buffer, L"%c",LOWORD(msg.wParam));
			SetWindowText(msg.hwnd, buffer);
			return 0;
		case WM_MOUSEMOVE:
			wprintf(buffer,L"(%d,%d)",
				LOWORD(msg.IParam), HIWORD(msg, IParam));
			SetWindowText(msg.hwnd, buffer);
			return 0;

		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}
	LRESULT CALLBACK MyWndProc(
		HWND hWnd, UINT iMsg, WPARAM wParam, LPARAM lParam) {
		printf(".");
		return DefWindowProc(hWnd, iMsg, wParam, lParam);
	}
#endif
#if 0
#include <windows.h>
#include <stdio.h>
	int main()
	{
		WNDCLASS wc = { 0, };
		wc.lpszClassName = "MyWnd";
		wc.lpfnWndProc = DefWindowProc;
		wc.hbrBackground =
			(HBRUSH)GetStockObject(
				WHITE_BRUSH);
		wc.hCursor = LoadCursor(
			0,
			IDC_ARROW);
		RegisterClass(&wc);
		CreateWindow(
			"MyWnd",
			"Hellow Window",
			WS_OVERLAPPEDWINDOW | WS_VISIBLE,
			100,
			100,
			200,
			100,
			0,
			0,
			0,
			0);
		MSG msg;
		while (GetMessage(&msg, 0, 0, 0)) {
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		return msg.wParam;
	}
#endif
#include <windows.h>
#include <stdio.h>
#include"resource.h"//추가 1
	LRESULT CALLBACK MyWndProc(HWND, UINT, WPARAM, LPARAM);
	int main() {

		WNDCLASS wc = { 0, };
		wc.lpszClassName = L"MyWnd";
		wc.hbrBackground =
			(HBRUSH)GetStockObject(
				WHITE_BRUSH);
		wc.hCursor = LoadCursor(0, IDC_ARROW);
		wc.lpszMenuName = MAKEINTRESOURCE(IDR_MENU1);
		wc.lpfnWndProc = MyWndProc;
		RegisterClass(&wc);

		CreateWindow(L"MyWnd", L"Hello Window",
			WS_OVERLAPPEDWINDOW | WS_VISIBLE,
			100, 100, 400, 400, 0, 0, 0, 0);
		MSG msg;
		while (1) {
			if(GetMessage(&msg, 0, 0, 0)==0) break;
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		return msg.wParam;
	}
	LRESULT CALLBACK MyWndProc(
		HWND hWnd, UINT iMsg, WPARAM wParam, LPARAM lParam) {
		static wchar_t buffer[32] = { 0, };
		switch (iMsg) {
		case WM_CHAR:
			wsprintf(buffer, L"%c", LOWORD(wParam));
			SetWindowText(hWnd, buffer);
			return 0;
		case WM_MOUSEMOVE:
			wsprintf(buffer, L"(%d,%d)",
				LOWORD(lParam), HIWORD(lParam));
			SetWindowText(hWnd, buffer);
		case WM_KEYDOWN:
			switch (LOWORD(wParam)) {
			case VK_LEFT: printf("<-"); break;
			case VK_RIGHT: printf("->"); break;
			case VK_UP: printf("ㅗ"); break;
			case VK_DOWN: printf("ㅜ"); break;
			case VK_SPACE: printf("_"); break;
			case VK_F1: printf("F1"); break;
			case 'A': printf("A"); break;
			}
			return 0;
		case WM_LBUTTONDOWN:
			printf("L(%d,%d)",
				LOWORD(lParam), HIWORD(lParam));
			return 0;
		case WM_CREATE:
			printf("여기서 GUI를 꾸미세요.");
			SetTimer(hWnd, 1001, 10, NULL);
			CreateWindow(L"button", L"A", WS_CHILD | WS_VISIBLE,
				10, 10, 60, 40, hWnd, (HMENU)2001, 0, 0);
			CreateWindow(L"button", L"B", WS_CHILD | WS_VISIBLE,
				100, 10, 60, 40, hWnd, (HMENU)2002, 0, 0);
			CreateWindow(L"button", L"C", WS_CHILD | WS_VISIBLE,
				200, 10, 60, 40, hWnd, (HMENU)2003, 0, 0);
		case WM_COMMAND:
			case 2001: printf("A"); break;
			switch (LOWORD(wParam)) {
			case 2002: printf("B"); break;
			case 2003: printf("C"); break;
			}
			return 0;
		case WM_TIMER:
			printf("t");
			return 0;
		case WM_DESTROY:
			printf("윈도우를 닫습니다.");
			PostQuitMessage(0);//WM_QUIT->메시지큐
			return 0;
		}
		return DefWindowProc(hWnd, iMsg, wParam, lParam);
	}