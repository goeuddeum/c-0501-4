#if 0
#include <stdio.h>
int main(int argc, char** argv)
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main(int argc, char **argv) {
	int i = 0;
	printf("%p(%zd[%d]\n", & i, sizeof(i), i);
	printf("%p(%zd[%d]\n", & argc, sizeof(argc), argc);
	printf("%p(%zd[%d]\n", & argv, sizeof(argv), argv);
	printf("%p\n", main);
}
#endif
#include <stdio.h>
#if 0
int main(void)
{
	int a;
	double b;
	char c;
	printf("int�� ������ �ּ� : %u\n", &a);
	printf("double�� ������ �ּ� : %u\n", &b);
	printf("chart�� ������ �ּ� : %u\n", &c);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main(void)
{
	int a;
	double b;
	char c;
	printf("int�� ������ �ּ� : %u %u\n", &a,&a+1);
	printf("double�� ������ �ּ� :%u %u\n", &b,&b+1);
	printf("chart�� ������ �ּ� :%u %u\n", &c,&c+1);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main(void)
{
	int a;
	int* pa;
	pa = &a;
	*pa = 10;
	printf("�����ͷ� a�� ��� : %d\n", *pa);
	printf("���������� a�� ��� : %d\n", a);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main(void)
{
	int a;
	int* pa;
	*pa = 10;
	*(pa + 0) = 11;
	pa[0] = 12;
	int i;
	i = 3;
	printf("�����ͷ� a�� ��� : %d\n", *pa);
	printf("���������� a�� ��� : %d\n", a);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main(void)
{
	int a[1] = { 3 };
	int* pa;
	*pa = 10;
	*(pa + 0) = 11;
	int i;
	int 
	printf("�����ͷ� a�� ��� : %d\n", *pa);
	printf("���������� a�� ��� : %d\n", a);
	return 0;
}#endif
int main(void)
{
	int a[1] = { 3 };
	int* pa;
	*pa = 10;
	*(pa + 0) = 11;
	pa[0] = 10;
	printf("�����ͷ� a�� ��� :$d %d\n", *pa, pa[0]);
	printf("���������� a�� ��� : %d\n", a);
	return 0;
}
#endif
#if 0
#include <stdio.h>
void swap(int* pa, int* pb);
int main(void)
{
	int a = 10, b = 20;
	swap(&a, &b);
	printf("a:%d,b:%d\n", a, b);
	return 0;
}
void swap(int* pa, int* pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
#endif
#if 0
#include <stdio.h>
int main(void)
{
	int ary[3];
	int i;
	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;;
	printf("�� ��° �迭 ��ҿ� Ű���� �Է� : ");
	scanf("%d", ary + 2);
	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main(void)
{
	int ary[3];
	int* pa = ary;
	int i;
	*pa = 10;
	*(pa + 1)=20;
	pa[2] = pa[0] + pa[1];
	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}
	return 0;
}
#endif
#include <stdio.h>
int main(void)
{
	int ary[3] = { 10,20,30 };
	int* pa = ary;
	int i;
	printf("�迭�� �� : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa);
		pa++;
	}
	return 0;
}
