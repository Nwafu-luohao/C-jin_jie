#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a[10], i;
	for (int i = 0; i < 10; i++) {
		a[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		printf("a[%d] = %d \n", a[i],a[i]);
	}

	return 0;
}