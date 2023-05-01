#if 0
#include <stdio.h>
int main() {
	int sum = 0;
	for (int i = 0; i <= 100; i++) {
		if ((i % 3) == 0) continue;

		sum += i;
	}
	printf("%d\n", sum);
}
#endif
#if 0
#include <stdio.h>
int main() {
	//while (1) {
	/*for (int cnt = 0; cnt <= 5; cnt++) {
		printf("Be happy~\n");
	}*/
	/*for (int cnt = 0; cnt <= 5; cnt++) {
		printf("Be happy~\n");
		if (cnt > 5) break;*/
	int cnt = 0;
	for (;;) {
		printf("Be happy~\n");
		if (cnt > 5) break;
	}
}
#endif
#if 0
#include <stdio.h>
int sum(int x, int y);
int main(void)
{
	int a = 10, b = 20;
	int result;
	result = sum(a, b);
	printf("result : %d\n", result);
	return 0;
}
int sum(int x, int y)
{
	int temp;
	temp = x + y;
	return temp;
}
#endif
#include <stdio.h>
int get_num(void);
int main(void)
{
	int result;
	result = get_num();
	printf("반환값 : %d\n", result);
	return 0;
}
int get_num(void)
{
	int num;
	printf("양수 입력 : ");
	scanf("%d", &num);
	return num;
}
