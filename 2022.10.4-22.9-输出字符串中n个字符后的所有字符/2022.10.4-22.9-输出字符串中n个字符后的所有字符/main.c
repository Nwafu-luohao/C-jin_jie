#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	char* ps = "This is a book";
	int n = 10;
	ps += n;
	printf("%s\n", ps);

	return 0;
}