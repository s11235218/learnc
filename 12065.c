#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//3601 60
//28807 8
//��λ����
//ȡ�������ÿһλ��
//����ת��
//i % m ��������� n �� m ������ÿһλ���ı���
int d12065() {
	int n, m;
	int sum = 0;
	scanf("%d%d", &n, &m);
	for (int i = n; i; i /= m) {
		sum = sum * m + i % m;
	}
	if (sum == n) {
		printf("�ǻ�����");
	}
	else {
		printf("���ǻ�����");
	}
	system("pause");
	return 0;
}