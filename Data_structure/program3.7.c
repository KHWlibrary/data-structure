//array1.c �迭�� �Լ��� �Ű������� ����ϴ� ���α׷�

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 6

void get_integers(int list[])
{
	printf("6���� ������ �Է��Ͻÿ�: ");
	for (int i = 0; i < SIZE; i++) {
		scanf_s("%d", &list[i]);
	}
}

int cal_sum(int list[])
{
	int sum = 0;
	for (int i = 0; i < SIZE; ++i) {
		sum += *(list + i);
	}
	return sum;
}

int main(void)
{
	int list[SIZE];
	get_integers(list);
	printf("�� = %d \n", cal_sum(list));
	return 0;
}