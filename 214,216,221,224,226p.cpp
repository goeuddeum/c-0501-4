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
	printf("��� : %.1lf\n", avg);
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
	printf("��� : %.1lf\n", avg);
	return 0;
}
#endif
#if 0
#include <stdio.h>
char garr[100000];//�����Ͱ���
int main() {
	garr[0] = 7;
	printf("hello %d\n", garr[0]);
	//���� ����: �Լ�����
}
#endif
#if 0
#include <stdio.h>
int main(void)
{
	char str[80] = "applejam";
	printf("���� ���ڿ� : %s\n", str);
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("�Է� �� ���ڿ�; %s\n", str);

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

	printf("���ڿ� �Է� : ");
	gets_s(str);
	puts("�Էµ� ���ڿ� : ");
	puts(str);
	return 0;
}