#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//素数
int sushu(int n) {
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			break;		
		}
	}
	if (i == n)
	{
		printf("是素数\n");
	}
	else
	{
		printf("不是素数\n");
	}
	return 0;
}
int d11198() {
	int n;
	printf("请输入要判断的数字:");
	scanf("%d", &n);
	sushu(n);
	system("pause");
	return 0;
}