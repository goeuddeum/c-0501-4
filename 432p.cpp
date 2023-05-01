#if 0
#include <stdio.h>
void func(int* p) {
	printf("%d\n", *(p+0)); //p[0]
	p[0] = 2;//*(p+0) = 2
}
int main() {
	int ary[5] = { 1,2,3 };
	func(ary);//&ary[0]
	printf("%d\n", ary[0]);//*(ary+0)
}
#endif
#if 0
#include <stdio.h>
void print_ary(int(*pa)[4]);
int main(void) {
	int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	print_ary(ary);//ary[0]
}
void print_ary(int(*ary)[4]) {
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 4; c++) {
			printf("%2d ", ary[r][c]);//*(*(ary+r)+c)
		}
		printf("\n");
	}
}
#endif
#if 0
#include <stdio.h>
int sum(int, int);
int main(void)
{
	int(*fp)(int, int);
	int res;
	fp = sum;
	res = fp(10, 20);
	printf("result : %d\n:", res);
	return 0;
}
int sum(int a,int b)
{
	return (a + b);
}
#endif
#if 0
#include <stdio.h>
void func(int(*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);
int main(void)
{
	int sel;
	printf("01 두 정수의 합\n");
	printf("01 두 정수의 곱\n");
	printf("01 두 정수의 중에서 큰 값 계산\n");
	printf("원한은 연산을 선택하세요 : ");
	scanf("%d", &sel);
	switch (sel)
	{
	case 1:func(sum); break;
	case 2:func(mul); break;
	case 3:func(max); break;
	}
	return 0;
}
void func(int(*fp)(int, int))
{
	int a, b;
	int res;
	printf("두 정수의 값을 입력하세요 :");
	scanf("%d%d", &a, &b);
	res = fp(a, b);
	printf("결과값은 : %d\n", res);
}
int sum(int a, int b)
{
	return(a + b);
}
int mul(int a, int b)
{
	return(a * b);
}
int max(int a, int b)
{
	if (a > b)return a;
	else return b;
}
#endif
#if 0
#include <stdio.h>
int main(void)
{
	int a = 10;
	double b = 3.5;
	void* vp;

	vp = &a;
	printf("a : %d\n", *(int*)vp);

	vp = &b;
	printf("b : %.1lf\n", *(double*)vp);
	return 0;
}
#endif
#if 0
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main(void)
{
	char temp[80];
	char* str[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("문자열을 입력하세요 : ");
		gets_s(temp);
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
	}
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}
	for (i = 0; i < 3; i++)
	{
		free(str[i]);
	}
	return 0;
}#endif
#if 0
#incluede<stdio.h>
#intclude<stdlib.h>
int main(void)
{
	int* pa;
	int size = 5;
	int count = 0;
	int num;
	int i;
	pi = (int*)calloc(size, sizeof(int));
	while (1)
	{
		printf("양수만 입력하세요=>");
		scanf("%d" & num);
		if (num <= 0)break;
		if (count == size)
		{
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi);
	return 0;
}
#endif
#include <stdio.h>
#include<malloc.h>
void print_ary(int(*pa))[4]);
intmain(void) {
	int(*ary)[4] = NULL;
	ary = (*)[4]mallof(sizeof(int) * 4 * 3);
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 4; c++) {
			aryp[r][c] = i++;
		}
	}
	print_ary(ary);//&ary[0]
}
void print_ary(int)(*ary)[4]){
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 4; c++) {
			printf(% 2d, ary[r][c]);
		}
		printf("\n");
	}
}
#endif
#if 0
#include<stdio.h>
void assign10(void);
void assign20(void);
int a;
int main(void)
{
	printf("함수 호출 전 a 값 : %d\n", a);
	assign10();
	assign20();
	printf("함수 호출 후 a 값 : %d\n", a);
	return 0;
}
void assign10(void)
{
	a = 10;
}
void assign20(void)
{
	int a;
	a = 20;
}
#endif
#if 0
#include <stdio.h>
void auto_func(void);
void static_func(void);
int main(void)
{
	int  i;
	printf("일반 지역 변수(auto)를 사용한 삼수...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}
	printf("정적 지역 변수(static)를 사용한 함수..\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}
	return 0;
}
void auto_func(void)
{
	auto int a = 0;
	a++;
	printf("%d\n", a);
}
void static_func(void)
{
	static int a;
	a++;
	printf("%d\n", a);
}
#endif

#if 0
#include<stdio.h>
int main(void)
{
	register int i;
	auto int sum = 0;
	for (i = 1; i <= 10000; i++)
	{
		sum += 1;
	}
	printf("%d\n", sum);
	return 0;
}
#endif
#if 0
#include <stdio.h>
void add_ten(int b, int * B) {
	b = b + 10;
	*B = *B + 10;//B[0]=B[0]+10
	printf("b:%d,B[0]:%d\n", b,B[0]);
}
int main(void) {
	int a = 10;
	int A[1] = { 100 };
	add_ten(a,A);//int b=a call by value
	//int * B=&A[0], call by address
	printf("a:%d,A[0]:%d\n", a,A[0]);
}
#endif
#if 0
#include <stdio.h>
int* sum(int a, int b);
int main(void)
{
	int* resp;
	resp = sum(10, 20);
	printf("두 정수의 합 : %d\n", *resp);
	return 0;
}
int* sum(int a, int b)
{
	static int res;
	res = a + b;
	return &res;
}
#endif
#include <stdio.h>
#if 0
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
	printf("학점 : %.1lf\n", s1.grade);
	return 0;
}
#endif
#if 0
#pragma pack(1)
#include<stdio.h>
struct student {
	int num;
	double grade;
};
int main(void) {
	printf("%zd\n", sizeof(struct student));
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct profile
{
	char name[20];
	int age;
	double height;
	char *intro;
};
int main(void)
{
	struct profile yuni;
		
	strcpy(yuni.name, "서하윤");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char *)malloc(80);
	printf("자기소개 : ");
	gets_s(yuni.intro);

	printf("이름 : %s\n", yuni.name);
	printf("나이 : %s\n", yuni.age);
	printf("키 : %1lf\n", yuni.height);
	printf("자기소개 : %s\n", yuni.intro);
	free(yuni.intro);
	return 0;
}
#endif
#include<stdio.h>
#if 0
struct profile
{
	int age;
	double height;
};
struct student
{
	struct profile pf;
	int id;
	double grade;
};
int main(void)
{
	struct student yuni;
	yuni.pf.age = 17;
	yuni.pf.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;
	printf("나이 : %d\n", yuni.pf.age);
	printf("키 : %.1lf\n", yuni.pf.height);
	printf("학번 : %d\n", yuni.id);
	printf("학점 : %.1f\n", yuni.grade);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main() {
	int a;
	double d;
	char c;
	printf("int형 변수의 주소 : %u %u\n", &a, &a + 1);//4
	printf("double형 변수의 주소 : %u %u\n", &d, &d + 1);//8
	printf("char형 변수의 주소 : %u %u\n", &c, &c + 1);//1
}
#endif
#if 0
#include <stdio.h>
int main() {
	int a = 3;
	int* pa = NULL;//8바이트 0
	pa = &a;//주소변수=a의주소값
	//&a = pa;//주소값=주소변수(x)
	//3 = a; //정수값 = 주소변수(x)
	*pa = 10; //*pa<=>*(pa+0)<=>pa[0]
	*(pa + 0) = 11;
	pa[0] = 12;
	printf("포인터로 a값 출력:%d\n", *pa);
	printf("변수명으로 a값 출력:%d\n", a);
}
#endif
#if 0
#include <stdio.h>
int main() {
	int ary[3] = { 0 };
	int i;
	*(ary + 0) = 10;
	//ary[0] = 10
	*(ary + 1) = *(ary + 0) + 10;
	//ary[1] = ary[0] + 10
	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf("%d", ary + 2);
	//&ary[2],ary<=>ary+0<=>&ary[0]
	for (i = 0; i < 3; i++) {
		printf("%5d", *(ary));//<=>art[i]
	}
}
#endif
#if 0
#include <stdio.h>
int main() {
	int ary[3] = { 0 };
	int* pa = ary;//
	int i;
	*pa = 10;//*pa <=>*(pa+0)<=>pa[0]
	//pa[0]=10
	*(pa + 1) = 20;
	//pa[1]=20
	pa[2] = pa[0] + pa[1];
	for (i = 0; i < 3; i++) {
		printf("%5d", pa[i]);
	}
}
#endif
#if 0
int ia[3] = { 1,2,3 };
ia[0] <=> *ia <=> *(ia + 0)
int iaa[2][3] = { 1,2,3,4,5,6 };
iaa[1][2] <=> *(iaa[1] + 2)
<=> *(*(iaa + 1) + 2)
int i = 3;
int j = i + 1;
int k = 3 + 1;
#endif
//접근연산자 사용해 보기
#include <stdio.h>
void func(int* p) {//정수변수 주소변수 p
	printf("%d\n", p[0]);//*(p+0)
	p[0] = 2;//*(p+0)=2
}
int main() {
	int ary[5] = { 1,2,3 };
	func(ary);//&ary[0]
	printf("%d\n", ary[0]);//*(ary+0)
}
//malloc 활용하기
#include <stdio.h>
#include <malloc.h>
void func(int* p) {
	printf("%d\n", p[0]);
	p[0] = 2;
}
int main() {
	//int ary[5]={1,2,3};
	int* ary = (int*)malloc(sizeof(int) * 5);
	ary[0] = 1; ary[1] = 2; ary[2] = 3; ary[3] = 0; ary[4] = 0;
	func(ary);
	printf("%d\n", ary[0]);
}