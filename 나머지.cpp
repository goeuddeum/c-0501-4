#if 0
#include <stdio.h>
//int main(int argc, char* argv[]){
int main(int argc, char** argv) {
	printf("argc=%d\n", argc);
	printf("argv[0]->\"%s0\"\n", argv[0]);
	printf("argv[1]->\"%s0\"\n", argv[1]);
	printf("argv[2]->\"%s0\"\n", argv[2]);
	printf("argv[3]->\"%s0\"\n", argv[3]);
	printf("argv[4]->\"%s0\"\n", argv[4]);
	printf("argv[5]->\"%s0\"\n", argv[5]);
	printf("argv[6]->\"%s0\"\n", argv[6]);
}
#endif
#if 0
#include <stdio.h>
//void prt(int* pary[3]){
//void prt(int*pary[]{
void prt(int** pary) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%5d", pary[i][j]);
		}
		printf("\n");
	}
}
int main(void) {
	int ary1[4] = { 1,2,3,4 };
	int ary2[4] = { 11,12,13,14 };
	int ary3[4] = { 21,22,23,24 };
	//int*pary[3]={ary1,ary2,ary3};//&ary1[0].&ary2[0],ary3[0]
	int* pary[3] = { &ary1[0],&ary2[0],&ary3[0] };
	prt(pary);
}
#endif
#if 0
#include <stdio.h>
int main(void) {
	int ary1[4] = { 1,2,3,4 };
	int ary2[4] = { 11,12,13,14 };
	int ary3[4] = { 21,22,23,24 };
	int* pary[3] = { ary1,ary2,ary3 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%5d", pary[i][j]);
		}
		printf("\n");
	}
}
#endif
#include <stdio.h>
int main(void) {
	const char* pary[5];
	int i;
	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";
	for (i = 0; i < 5; i++) {
		printf("%s\n", pary[i]);
	}
}