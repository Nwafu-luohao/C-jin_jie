#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int fac(int n) {
	static int f = 1;
	f *= n;
	return f;
}

int main() {
	int i;
	for (i = 1; i < 6; i++) {
		printf("%d! = %d\n", i, fac(i));
	}

	return 0;
}