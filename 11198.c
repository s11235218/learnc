#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//����
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
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
	return 0;
}
int d11198() {
	int n;
	printf("������Ҫ�жϵ�����:");
	scanf("%d", &n);
	sushu(n);
	system("pause");
	return 0;
}