#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//数位遍历, 判断回文数
int d12064() {
	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	for (int i = n; i; i /= 10) {
		sum = sum * 10 + i % 10;
	}
	printf("%d\n", sum);
	if (sum == n) {
		printf("是回文数");
	}
	else {
		printf("不是回文数");
	}
	system("pause");
	return 0;
}