#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//3601 60
//28807 8
//数位遍历
//取出输出的每一位数
//进制转换
//i % m 能完成数字 n 在 m 进制下每一位数的遍历
int d12065() {
	int n, m;
	int sum = 0;
	scanf("%d%d", &n, &m);
	for (int i = n; i; i /= m) {
		sum = sum * m + i % m;
	}
	if (sum == n) {
		printf("是回文数");
	}
	else {
		printf("不是回文数");
	}
	system("pause");
	return 0;
}