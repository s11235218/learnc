#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Isleap(int year) {
	if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0) {
			printf("������!");
	}
	else {
		printf("��������!");
	}
	return 0;
}
int d11196() {
	int year;
	scanf("%d", &year);
	Isleap(year);
	system("pause");
	return 0;
}
