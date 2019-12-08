#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Ë®ÏÉ»¨Êý
int d12062() {
	int tmp;
	for (int i = 100; i < 1000; i++) {
		tmp = pow(i % 10, 3) + pow(i / 10 % 10, 3) + pow(i / 100, 3);
		if (tmp == i) {
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}