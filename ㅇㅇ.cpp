#if 0
#include <stdio.h>
void f(int ip, double dp, char cp,char strp[16], int iarrp[8], double darrp[4]) {
	printf("%d\n", ip);
	printf("%lf\n", dp);
	printf("%c\n", cp);
	printf("%s\n", strp);
	printf("%d %d\n",iarrp[0],iarrp[1]);
	printf("%lf %lf\n", darrp[0], darrp[1]);
}
int main() {
	int i = 3;
	double d = 3.14;
	char c = 'a';
	char str[16] = "hello";
	int iarr[8] = { 1,2,3,4,5, };
	double darr[4] = { 1.0,2.0, };
	f(i, d, c,//int ip = i//정수변수 =정수값
		str, iarr, darr);
}
#endif
#if 0
#include <stdio.h>
void f(char str[16]) {
	printf("2.sizeof(str)=%zd\n", sizeof(str));
	printf("%s\n", str);
}
int main() {
	char str[16] = "hello";
	printf("1.sizeof(str)=%zd\n",sizeof(str));
	f(str);
}
#endif
#if 0
#include <stdio.h>
void f(char* str) {
	printf("2.sizeof(str)=%zd\n", sizeof(str));
	printf("%s\n", str);
}
int main() {
	char str[16] = "hello";
	printf("1.sizeof(str)=%zd\n", sizeof(str));
	f(str);
}
#endif
#if 0
#include <stdio.h>
void f(int ia[16]) {
	printf("2.sizeof(ia)=%zd\n", sizeof(ia));
}
int main() {
	int ia[16] = { 1, };
	printf("1.sizeof(ia)=%zd\n", sizeof(ia));
	f(ia);
}
#endif
#include <stdio.h>
void f(char d) {
	printf("2 sizeof(d)\%zd\n", sizeof(d));
}
int main() {
	char d = 3.14;
	printf("1.sizeof(d)=%zd\n", sizeof(d));
	f(d);
}