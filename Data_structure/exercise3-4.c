#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

/*ũ�� 10 �迭 two���� ���⿡ 2�� ���� ���� ����2^0~2^9����*/
int main(void)
{
	int* p;
	p = (int*)malloc(SIZE * sizeof(int));
	if (p == NULL) {
		fprintf(stderr, "�޸𸮰� �����ؼ� �Ҵ��� �� �����ϴ�.\n"); //fprintf��´���� ���� ��Ʈ��
		exit(1);
	}

	for (int i = 0; i < SIZE;i++)
		p[i] = 1 << i;		//2�� i�� ����

	for (int i = 0; i < SIZE;i++)
	{
		printf("%d ", p[i]);
	}

	free(p);
	return 0;
}