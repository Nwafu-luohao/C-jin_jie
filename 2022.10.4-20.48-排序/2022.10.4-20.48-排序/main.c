#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// 查找排序

int main() {
	int p, q, s, a[10];
	printf("\n input 10 numbers: \n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]); // 输入10个数
	}
	for (int i = 0; i < 10; i++) {
		p = i;
		q = a[i];
		for (int j = i + 1; j < 10; j++) { // 找出剩余数中最大的数
			if (q < a[j]) {
				p = j;
				q = a[j];
			}
		}
		if (i != p) { // 将最大数和标记的数交换位置
			s = a[i];
			a[i] = a[p];
			a[p] = s;
		}
		printf("%d ", a[i]);
	}
	return 0;
}