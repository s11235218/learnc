#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//¥Ú”°¡‚–Œ * ∫≈Õº
int d12061() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
#if 0
		for (int j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
#else
		for (int j = 0; j < i + n - 1; j++) {
			putchar(j < n - i ? ' ' : '*');
		}
#endif
		printf("\n");
	}
	for (int i = n; i > 0; i--) {
#if 0
		for (int j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
#else
		for (int j = 0; j < i + n - 1; j++) {
			putchar(j < n - i ? ' ' : '*');
		}
#endif
		printf("\n");
	}
	system("pause");
	return 0;
}