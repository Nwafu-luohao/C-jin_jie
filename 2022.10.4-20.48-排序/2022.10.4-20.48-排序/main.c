#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// ��������

int main() {
	int p, q, s, a[10];
	printf("\n input 10 numbers: \n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]); // ����10����
	}
	for (int i = 0; i < 10; i++) {
		p = i;
		q = a[i];
		for (int j = i + 1; j < 10; j++) { // �ҳ�ʣ������������
			if (q < a[j]) {
				p = j;
				q = a[j];
			}
		}
		if (i != p) { // ��������ͱ�ǵ�������λ��
			s = a[i];
			a[i] = a[p];
			a[p] = s;
		}
		printf("%d ", a[i]);
	}
	return 0;
}