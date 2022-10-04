#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a, b;
	printf("please input A,B:  ");
	scanf("%d%d", &a, &b);
	if (a == b) {
		printf("A = B\n");
	}
	else if (a > b) {
		printf("A > B\n");
	}
	else {
		printf("A < B\n");
	}

	return 0;
}