#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int d11192() {
	int year;
	printf("请输入1000年-2000年以内的年份:");
	//三次输入机会
	for (int i = 0; i < 3; i++) {
		scanf("%d", &year);
		//判断用户输入数字是否在范围内
		if (year >= 1000 && year <= 2000) {
			break;//在范围内跳出循环
		}
		//不在范围内,输出还有2-i次机会
		else if (2 - i) {
			printf("请输入正确范围内的年份,你还有%d次机会:", 2 - i);
		}
		//当2 - i等于零时, 直接输出没机会了同时year赋值0,不再进行接下来的判断
		else {
			printf("\n你没有机会了!\n");
			year = 0;
		}
	}
	//year==0时,输入时超过三次
	if (year) {
		//闰年(年份被4整除但不被100整除||被400整除)
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			printf("您输入的年份是闰年\n");
		}
		else {
			printf("您输入的年份不是闰年!\n");
		}
	}
	system("pause");
	return 0;
}
