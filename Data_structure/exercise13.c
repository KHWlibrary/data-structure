#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int recursive(int n)
{
	printf("%d\n", n);
	if (n < 1) return 0;
	else return(recursive(n-1));
}

int main(void)
{
	int n;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &n);
	printf("result = %d", recursive(n));

	return 0;
}