#include<stdio.h>
#include <stdlib.h> //malloc, free

int main(void)
{
	int* p[3];	//������ �迭 // ������ ���� 3��
	int i, j;
	int num = 1;

	//���� �޸� �Ҵ�
	for (i = 0; i < 3; i++)//�迭�� ÷��
	{
		p[i] = (int*)malloc(sizeof(int) * 4);
	}
	/*p[0] = (int*)malloc(sizeof(int) * 4);
	p[1] = (int*)malloc(sizeof(int) * 4);
	p[2] = (int*)malloc(sizeof(int) * 4);*/

	for (i = 0;i < 3;i++)//��
	{
		for (j = 0; j < 4;j++)//��
		{
			p[i][j] = num++; //���� ����
			printf("%4d", p[i][j]);
		}
		puts("");//�ٹٲ�
	}

	//���� �޸� ����
	for (i = 0;i < 3;i++)//�迭�� ÷��
	{
		//free(������);
		free(p[i]);
	}
	return 0;
}

/*��°�
1 2  3  4
5 6  7  8
9 10 11 12*/