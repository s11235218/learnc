#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int d11193() {
	int i = 0;
	int j = 0;
	int k = 0;
	printf("ˮ�ɻ�����:\n");
	for (int n = 2; n < 999; n++) {
		i = n / 100;
		j = n / 10 - i * 10;
		k = n % 10;
		if (n == pow(i, 3) + pow(j, 3) + pow(k, 3)) {
			printf("%d ", n);
		}
	}
	system("pause");
	return 0;
}