#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int recursive(int n)
{
	if (n != 1) recursive(n - 1);
	printf("%d\n", n);

}

int main(void)
{
	int n;
	printf("������ �Է�: ");
	scanf("%d", &n);
	printf("�����: %d\n", recursive(n));
}