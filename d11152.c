#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int d11152() {
	int a[5] = {1, 2, 3, 4, 5};
	int b[5] = {4, 5, 6, 7, 8};
	
	for (int i = 0; i < 5 ; i++) {

		int tmp;
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
		printf(" %d", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf(" %d", b[i]);
	}
	return 0;
	system("pause");
}