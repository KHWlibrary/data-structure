#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n)
{
    if (n == 1) return 1;
    else return (n + sum(n - 1));
}

int main(void)
{
    int n;
    printf("���ڸ� �Է����ּ��� : ");

    // scanf ��ȯ�� üũ
    if (scanf("%d", &n) != 1) {
        printf("�Է� ����! ������ �Է��ϼ���.\n");
        return 1; // ���α׷� ����
    }

    // 1 �̻��� ���ڸ� �޵��� üũ
    if (n <= 0) {
        printf("����� �Է��ϼ���.\n");
        return 1;
    }

    printf("result = %d\n", sum(n));
    return 0;
}
