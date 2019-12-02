#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("请输入密码:");
	//三次输入机会
	for (int i = 0; i < 3; i++) {
		scanf("%d", &n);
		//判断用户输入数字是否在范围内
		if (n == 8888) {
			printf("登陆成功!");//在范围内跳出循环
		}
		//不在范围内,输出还有2-i次机会
		else if (2 - i) {
			printf("请输入正确的密码,你还有%d次机会:", 2 - i);
		}
		//当2 - i等于零时, 直接输出没机会了同时year赋值0,不再进行接下来的判断
		else {
			printf("\n登陆失败!\n");
		}
	}
	system("pause");
	return 0;
}
