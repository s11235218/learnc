#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//��λ����, �������
int d12063() {
	int n = 0;
	scanf("%d", &n);
	for (int i = n; i ; i /= 10) {
		printf("%d", i % 10);
	}
	putchar('\n');
	system("pause");
	return 0;
}