#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int d11192() {
	int year;
	printf("������1000��-2000�����ڵ����:");
	//�����������
	for (int i = 0; i < 3; i++) {
		scanf("%d", &year);
		//�ж��û����������Ƿ��ڷ�Χ��
		if (year >= 1000 && year <= 2000) {
			break;//�ڷ�Χ������ѭ��
		}
		//���ڷ�Χ��,�������2-i�λ���
		else if (2 - i) {
			printf("��������ȷ��Χ�ڵ����,�㻹��%d�λ���:", 2 - i);
		}
		//��2 - i������ʱ, ֱ�����û������ͬʱyear��ֵ0,���ٽ��н��������ж�
		else {
			printf("\n��û�л�����!\n");
			year = 0;
		}
	}
	//year==0ʱ,����ʱ��������
	if (year) {
		//����(��ݱ�4����������100����||��400����)
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			printf("����������������\n");
		}
		else {
			printf("���������ݲ�������!\n");
		}
	}
	system("pause");
	return 0;
}
