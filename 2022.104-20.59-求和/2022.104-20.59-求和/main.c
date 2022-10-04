#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void s(int n) {
	int i;
	for (i = n - 1; i >= 1; i--) {
		n += i;
	}
	printf("sum = %d\n", n);
}

int main() {
	int n;;
	printf("input number\n");
	scanf("%d", &n);
	s(n);
	printf("n = %d\n", n);

	return 0;
}