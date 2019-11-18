#include <stdio.h>
#include <stdlib.h>

int d11154() {
	int count = 0;
	for (int i = 1; i < 1000; i++) {
		if (i % 10 == 9) {
			count++;
		}
		if (i / 100 %10 == 9) {
			count++;
		}
		if (i / 100 == 9) {
			count++;
		}
	}
	printf("1000以内出现数字9的次数为 %d\n", count);
	system("pause");
	return 0;
}