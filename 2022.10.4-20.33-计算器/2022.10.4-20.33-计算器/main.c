#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	float a, b;
	char c;
	printf("input expression: a+(-,*,/)b \n");
	scanf("%f%c%f", &a, &c, &b);
	switch (c) {
	case '+':
		printf("%f\n", a + b);
		break;
	case '-':
		printf("%f\n", a - b);
		break;
	case '*':
		printf("%f\n", a * b);
		break;
	case '/':
		printf("%f\n", a / b);
		break;
	default:
		printf("input error");
		break;
	}

	return 0;
}