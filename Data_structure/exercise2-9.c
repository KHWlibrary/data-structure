#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int recursive(int n)
{
	printf("%d\n", n);
	if (n < 1) return -1;
	else return(recursive(n - 3) + 1);
}

int main(void)
{
	int n;
	printf("���ڸ� �Է����ּ���: ");
	scanf("%d", &n);

	printf("������� %d�Դϴ�. ", recursive(n));
}