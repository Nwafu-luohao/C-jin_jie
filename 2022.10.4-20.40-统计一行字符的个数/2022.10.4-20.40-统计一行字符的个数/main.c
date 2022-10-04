#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int n = 0;
	printf("input a string:\n");
	while (getchar()!='\n') {
		n++;
	}
	printf("count = %d\n", n);

	return 0;
}