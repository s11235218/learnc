#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//��λ����, �жϻ�����
int d12064() {
	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	for (int i = n; i; i /= 10) {
		sum = sum * 10 + i % 10;
	}
	printf("%d\n", sum);
	if (sum == n) {
		printf("�ǻ�����");
	}
	else {
		printf("���ǻ�����");
	}
	system("pause");
	return 0;
}