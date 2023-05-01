#if 0
#include <stdio.h>
int main(void)
{
	int score[5] = { 0, };
	int i;
	int total = 0;
	double avg;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}
	for (i = 0; i < 5; i++)
	{
		total+= score[i];
	}
	avg = total / 5.0;
	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");
	printf("평균 : %.1lf\n", avg);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;
	count = sizeof(score) / sizeof(score[0]);
	for (i = 0; i < count; i++)
	{
		scanf("%d", &score[i]);
	}
	for (i = 0; i < count; i++)
	{
		total += score[i];
	}
	avg = total / (double)count;
	for (i = 0; i < count; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");
	printf("평균 : %.1lf\n", avg);
	return 0;
}
#endif
#if 0
#include <stdio.h>
char garr[100000];//데이터공간
int main() {
	garr[0] = 7;
	printf("hello %d\n", garr[0]);
	//스택 공간: 함수변수
}
#endif
#if 0
#include <stdio.h>
int main(void)
{
	char str[80] = "applejam";
	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 후 문자열; %s\n", str);

	return 0;
}
#endif
#if 0
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[80] = "cat";
	char str2[80];
	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s,%s\n", str1, str2);
	return 0;
}
#endif
#include <stdio.h>

int main(void)
{
	char str[80];

	printf("문자열 입력 : ");
	gets_s(str);
	puts("입력된 문자열 : ");
	puts(str);
	return 0;
}