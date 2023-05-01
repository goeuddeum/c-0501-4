#if 0
#include <stdio.h>
void print_char(char ch, int count);
int main(void)
{
	print_char('@',5);
	return 0;
}
void print_char(char ch, int count)
{
	int i;
	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}
	return;
}
#endif
#if 0
#include<stdio.h>
void print_line(void);
int main(void)
{
	print_line();
	printf("학번 이름 전공 학점\n");
	print_line();

	return 0;
}
void print_line(void)
{
	int i;
	for (i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
}
#if 0
#endif
#include <stdio.h>
struct parm {
	int param[4096];
};
void f(struct param p) {
	struct param lv[2];// ={1,};
	printf("%d", p.parr[0]++);
	f(p);
}
int main() {
	struct param a = { 0, };
}
int main() {
	struct param a = { 0, };
}
#endif
#include <stdio.h>
int main() {
	printf("%d", i++);
	main();
}