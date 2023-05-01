#if 0
#include <stdio.h>
int main(void) 
{
	const char *pary[5];
	int i;

	pary[0] = "dog";
	pary[1] = "elepahant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";
	for (i = 0; i < 5;i++);
	{
		printf("%s\n",pary[i]);
	}
	return 0;
}
#endif
#if 0
#include <stdio.h>
void prt(const char**pary) { //(const char *)*
	for (int i = 0; i < 5; i++) {
		printf("%s\n", pary[i]);
	}
}
int main(void){
	const char* pary[5];

	pary[0] = "dog";
	pary[1] = "elepahant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";
	prt(pary);//=>&pary[0] &(const char*)
}
#endif
#include <stdio.h>
void prt(int**pary) {
	for (int i = 0; i< 3; i++ ) {
		for (int j = 0; j < 4; j++) {
			printf("%5d", pary[i][j]);
		}
		printf("\n");
	}
}
int main(void)
{
	int ary1[4] = { 1,2,3,4 };
	int ary2[4] = { 11,12,13,14 };
	int ary3[4] = { 21,22,23,24 };
	int* ary3[3] = { &ary1[0],&ary2[0],&ary3[0]};
	prt(int**pary);
}
#endif