#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a;
	long b;
	float f;
	double d;
	char c;
	printf("\nint: %d\nlong: %d\nfloat: %d\ndouble: %d\nchar:%d\n", sizeof(a), sizeof(b), sizeof(f), sizeof(d), sizeof(c));

	return 0;
}