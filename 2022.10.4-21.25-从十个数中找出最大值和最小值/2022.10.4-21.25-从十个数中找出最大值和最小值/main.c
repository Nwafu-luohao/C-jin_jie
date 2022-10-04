#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int max, min;

void max_min_value(int array[], int n) {
	int* p, * array_end;
	array_end = array + n;
	max = min = *array;
	for (p = array + 1; p < array_end; p++) {
		if (*p > max) {
			max = *p;
		}
		else if (*p < min) {
			min = *p;
		}
	}

	return;
}

int main() {
	int number[10];
	printf("input 10 integer numbers: \n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &number[i]);
	}
	max_min_value(number, 10);
	printf("\nmax = %d, min = %d\n", max, min);

	return 0;
}