#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int t = 1;
	int i = 2;
	while (i <= 5) {
		t *= i;
		i++;
	}
	printf("%d", t);

	return 0;
}