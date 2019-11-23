#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int result1(int line) {
	int i, j;
	for (i = 0; i <= line; i += 2) {
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = line - 1; i > 0; i -= 2) {
		for (j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
 }

int result2(int line) {
	int i, j, k;
	//正金字塔形状打印
	for (i = 1; i <= line; i++) {
		for (j = 1; j <= line - i; j++) {
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	//倒金字塔形状打印
	for (i = line - 1; i > 0; i--) {
		for (j = line - i; j > 0; j--) {
			printf(" ");
		}
		for (k = 2 * i - 1; k > 0; k--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
int d11191() {
	int line;
	scanf("%d", &line);
	printf("输出结果为:\n");
	result1((line - 1) * 2);
	result2(line);
	system("pause");
}
