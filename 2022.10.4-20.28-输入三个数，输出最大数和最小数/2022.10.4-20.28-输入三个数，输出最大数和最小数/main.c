#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a, b, c, max, min;
	printf("input three number:  ");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b) {
		max = a;
		min = b;
	}
	else {
		max = b;
		min = a;
	}
	if (max < c) {
		max = c;
	}
	else if (min > c) {
		min = c;
	}
	printf("max = %d\nmin = %d\n", max, min);

	return 0;
}