#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void asterisk(int i)
{
	if (i > 1)
	{
		asterisk(i / 2);
		asterisk(i / 2);
	}
	printf("*");
}
int main(void)
{
	int i;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &i);
	printf("����� :");
	asterisk(i);		//void �Լ��� ��ȯ���� ������� ����
	printf("\n");
}