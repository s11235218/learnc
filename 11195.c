#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int mulT(int n) {
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d * %d = %d  ", j, i, i * j);
		}
		printf("\n");
	}
}

int d11195() {
	int n;
	printf("请输入需要打印的乘法表数:");
	scanf("%d", &n);
	mulT(n);
	system("pause");
	return 0;
}