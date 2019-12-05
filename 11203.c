#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bin_search(int arr[], int left, int right, int key) {
	int mid = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] > key) {
			right = mid - 1;
		}
		else if (arr[mid] < key) {
			left = mid + 1;
		}
		else {
			break;
		}
	}
	if (left <= right) {
		printf("找到了, 下标是%d\n", mid);
	}
	else {
		printf("找不到了!");
	}
	return 0;
}
int d11203() {
	int key;
	scanf("%d", &key);
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int left = 0;
	int right = sizeof(arr) / sizeof(int) - 1;
	bin_search(arr, left, right, key);
	system("pause");
	return 0;
}