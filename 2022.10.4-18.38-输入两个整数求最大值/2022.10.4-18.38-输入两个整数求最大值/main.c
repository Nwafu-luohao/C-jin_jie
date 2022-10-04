#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int max(int a, int b) {
	if (a > b) {
		return a;
	}
	return b;
}

int main() {
	int x, y, z;
	printf("input two number:\n");
	scanf("%d%d", &x, &y);
	z = max(x, y);
	printf("max-num = %d\n", z);

	return 0;
}