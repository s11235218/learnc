#include <stdio.h>
#include <stdlib.h>

int d11151() {
	int i, j, k;
	int line;
	scanf_s("%d", &line);
	printf("������Ϊ:\n");
	//����������״��ӡ
	for(i = 1; i <= line; i++){
		for (j = 1; j <= line - i; j++) {
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++) {
			printf("*"); 	
		}
		printf("\n");
	}
	//����������״��ӡ
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