#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void unknown()
{
	int ch;
	if ((ch = getchar()) != '\n')
		unknown();
	putchar(ch);
}

int main(void)
{
	printf("���ڿ��� �Է��ϼ���: ");
	unknown();
	
	return 0;
}