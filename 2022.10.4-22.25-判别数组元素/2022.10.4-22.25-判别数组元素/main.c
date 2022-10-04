#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void nzp(int v) {
	if (v > 0) {
		printf("%d, ", v);
	}
	else {
		printf("%d, ", 0);
	}
}

int main() {
	int a[5];
	printf("input 5 numbers: \n");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
		nzp(a[i]);
	}

	return 0;
}