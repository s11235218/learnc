#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int judge1(int a, int b) {
	int tmp = a < b ? a : b;
	int i;
	for (i = 2; i <= tmp; i++) {
		if (a % i == 0 && b % i == 0) {
			break;
		}
	}
	printf("a = %d��b = %d�����Լ��Ϊ:%d\n", a, b, i);
	printf("a = %d��b = %d����С������Ϊ:%d\n", a, b, (a / i)*(b / i)*i);
	return 0;
}
int judge2(int a, int b) {
	int tmp = a < b ? a : b;
	int i;
	for (i = tmp; ; i--) {
		if (a % i == 0 && b % i == 0) {
			break;
		}
	}
	printf("a = %d��b = %d�����Լ��Ϊ:%d\n", a, b, i);
	printf("a = %d��b = %d����С������Ϊ:%d\n", a, b, (a / i)*(b / i)*i);
	return 0;
}
int d11156() {
	int a, b;
	printf("��������������:");
	scanf("%d%d", &a, &b);
	judge1(a, b);
	judge2(a, b);
	system("pause");
	return 0;
}