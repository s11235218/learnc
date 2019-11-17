#include <stdio.h>
#include <stdlib.h>

int d11151() {
	int i, j, k;
	int line;
	scanf_s("%d", &line);
	printf("输出结果为:\n");
	//正金字塔形状打印
	for(i = 1; i <= line; i++){
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
	system("pause");
}