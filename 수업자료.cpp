#if 0
#include <stdio.h>
int main() {
	while (1);
	//main();
}
#endif
#if 0
#include<stdio.h>
struct param {
	int parr[1024];
};
void f(struct param p) {
	struct param lv[2];// = {1,};
	printf("%d", p.parr[0]++);
	f(p);
}
int main() {
	struct param a = { 0, };
	f(a);
}
#endif
#include <stdio.h>
int i = 0;
int main() {
	printf("%d",i++);
	main();
}