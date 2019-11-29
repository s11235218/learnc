#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int exc(int x, int y) {
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
	printf("交换后: x = %d , y = %d\n", x, y);
	return 0;
}

int d11197() {
	int x, y;
	scanf("%d%d", &x, &y);
	printf("交换前: x = %d , y = %d\n", x, y);
	exc(x, y);
	system("pause");
	return 0;
}