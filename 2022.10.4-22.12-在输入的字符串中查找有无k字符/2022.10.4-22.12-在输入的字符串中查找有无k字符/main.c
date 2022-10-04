#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	char st[20], * ps;
	int i = 0;
	printf("input a string:\n");
	ps = st;
	scanf("%s", ps);
	for (i = 0; ps[i] != '\0'; i++) {
		if (ps[i] == 'k') {
			printf("There is a 'k' in the string\n");
			break;
		}
	}
	if (ps[i] == '\0') {
		printf("There is no 'k' in the string\n");
	}

	return 0;
}