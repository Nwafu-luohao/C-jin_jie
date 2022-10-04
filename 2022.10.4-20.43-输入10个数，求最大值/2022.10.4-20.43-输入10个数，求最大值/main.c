#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int i, max, a[10];
	printf("input 10 number: \n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	max = a[0];
	for (int i = 0; i < 10; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	printf("max-num: %d\n", max);

	return 0;
}