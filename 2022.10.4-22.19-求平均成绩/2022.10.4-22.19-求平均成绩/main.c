#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

float aver(float a[5]) {
	int i;
	float av, s = a[0];
	for (i = 1; i < 5; i++) {
		s += a[i];
	}
	av = s / 5;
	return av;
}

int main() {
	float sco[5], av;
	int i;
	printf("\ninput 5 scores:\n");
	for (i = 0; i < 5; i++) {
		scanf("%f", &sco[i]);
	}
	av = aver(sco);
	printf("average score is %5.2f", av);

	return 0;
}