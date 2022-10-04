#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main() {
	double x, s;
	printf("input number:  \n");
	scanf("%lf", &x);
	s = sin(x);
	printf("sine of %lf is %lf\n", x, s);

	return 0;
}