#include <stdio.h>
#include <stdlib.h>

int sum() {
	int i, j;
	double sum = 0;
	//计算所有和的部分
	for (i = 1; i <= 99; i += 2) {
		//一定要写1.0,否则会强制转换为整型变量
		sum += 1.0 / i;
	}
	//计算所有差的部分
	for (j = 2; j <= 100; j += 2) {
		sum -= 1.0 / j;
	}
	printf("1/1-1/2+1/3 …… + 1/99 - 1/100 = %lf", sum);
	return 0;
}
int sum1() {
	double tmp = 1;
	double sum = 0;
	int tag = 1;
	for (int i = 1; i <= 100; i++) {
		tmp = tag * 1.0 / i;
		sum += tmp;
		tag *= -1;
	}
	printf("1/1-1/2+1/3 …… + 1/99 - 1/100 = %lf", sum);
	system("pause");
	return 0;
}
int main() {
	sum1();
	sum();
	system("pause");
}