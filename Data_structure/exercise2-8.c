#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int recursive(int n)
{
	printf("%d\n", n);
	if (n < 1) return 2;
	else return(2 * recursive(n - 1) + 1);
}

int main(void)
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	printf("result = %d", recursive(n));

	return 0;
}