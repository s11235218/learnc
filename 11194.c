#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int cal(int n, int a) {
	int i;
	int tmp = n;
	int sum = n;
	for (i = 0; i < a - 1; i++) {
		tmp = tmp * 10 + n;
		sum += tmp;
	}
	return sum;
}


int d11194() {
	int n,a;
	printf("������0-9��Χ�ڵ�����:");
	scanf("%d", &n);
	printf("��������Ҫ���ǰn���:");
	scanf("%d", &a);
	printf("%d\n", cal(n,a));
	system("pause");
	return 0;
}