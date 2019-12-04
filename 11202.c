#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int d11202() {
	char psw[10] = "";
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; ++i) {
		printf("ÇëÊäÈëÃÜÂë:");
		scanf("%s", &psw);
		if (strcmp(psw, "password") == 0) {
			break;
		}
	}
	if (i == 3) {
		printf("ÍË³ö\n");
	}
	else {
		printf("µÇÂ½³É¹¦!");
	}
	system("pause");
	return 0;
}