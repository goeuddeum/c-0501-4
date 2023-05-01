#if 0
include <stdio.h>
int main(int argc, char* argv[]) {
	printf(" * argc = % d\n", argc);
	printf("argc[0],%s\n", argv[0]);
	printf("argc[1],%s\n", argv[1]);
	printf("argc[2],%s\n", argv[2]);
	printf("argc[3],%s\n", argv[3]);
	printf("argc[4],%s\n", argv[4]);
	printf("argc[5],%s\n", argv[5]);
	printf("argc[6],%s\n", argv[6]);
}
#endjf 

#include <stdio.h>
int mailm(int argc, char** argv) {
	printf("argc=%d\n", argc);
	printf("argc[0]->\"%s0\"", argv[0]);
	printf("argc[1]->\%s0\", argv[1]);
}	printf("argc[2]->\%s0\", argv[2]);
}	printf("argc[3]->\%s0\", argv[3];)
	printf("argc[4]->\%s0\", argv[4]);
	printf("argc[5]->\%s0\", argv[5]);
	printf("argc[6]->\%s0\", argv[6]);
}