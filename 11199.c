#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("����������:");
	//�����������
	for (int i = 0; i < 3; i++) {
		scanf("%d", &n);
		//�ж��û����������Ƿ��ڷ�Χ��
		if (n == 8888) {
			printf("��½�ɹ�!");//�ڷ�Χ������ѭ��
		}
		//���ڷ�Χ��,�������2-i�λ���
		else if (2 - i) {
			printf("��������ȷ������,�㻹��%d�λ���:", 2 - i);
		}
		//��2 - i������ʱ, ֱ�����û������ͬʱyear��ֵ0,���ٽ��н��������ж�
		else {
			printf("\n��½ʧ��!\n");
		}
	}
	system("pause");
	return 0;
}
