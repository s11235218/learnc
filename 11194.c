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
	printf("请输入0-9范围内的数字:");
	scanf("%d", &n);
	printf("请输入需要求的前n项和:");
	scanf("%d", &a);
	printf("%d\n", cal(n,a));
	system("pause");
	return 0;
}