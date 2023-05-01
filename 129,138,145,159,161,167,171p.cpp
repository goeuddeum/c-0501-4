#if 0
#include <stdio.h>
int main(void)
{
	int a = 0, b = 0;
	if (a > 0)
	{
		b = 1;
	}
	else if (a == 0)
	{
		b = 2;
	}
	else
	{
		b = 3;
	}
	printf("b : %d\n", b);
	return 0;
}
#endif
#if 0
#include < stdio.h>
int main(void)
{
	int a = 20, b = 10;
	if (a > 10)
	{
		if (b >= 0)
		{
			b = 1;
		}
		else
		{
			b = -1;
		}
	}
	printf("a : %d, b : %d\n", a, b);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main(void)
{
	int rank = 2, m = 0;
	switch (rank)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}
	printf("m : %d\n", m);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main(void)
{
	int a = 1;
	int i;
	for (i = 0; i < 3; i++)
	{
		a = a * 2;
	}
	printf("a : %d\n", a);
	return 0;
}
#endif
#if 0
#include <stdio.h>

int main(void)
{
	int a = 1;
	do
	{
		a = a * 2;
	} while (a < 10);
	printf("a : %d\n", a);
	return 0;
}
#endif
#if 0
#include<stdio.h>
int main(void)
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
#endif
#include<stdio.h>
int main(void)
{
	int i;
	int sum = 0;
	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30)break;
	}
	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", i);
	return 0;
}