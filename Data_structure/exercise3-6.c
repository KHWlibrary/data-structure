/*typedef�� �̿��Ͽ� complex�ϴ� ���ο� �ڷ����� �����϶�
complex�ڷ����� ����ü�μ� float ��real ����, imaginary������ ���´�
complex �ڷ������� ����c1�� c2�� �����϶�*/

#include<stdio.h>
#define MAX_TERMS 100
typedef struct {
	float real;
	float imaginary;
}complex;

int main(void) {
	complex c1, c2;

	c1.real = 1.33333;
	c1.imaginary = 12.1;
	
	c2.real = 2.55;
	c2.imaginary = 2.4442;

	printf("c1 = %.1f + %.1f\n", c1.real, c1.imaginary);
	printf("c2 = %.1f + %.1f", c2.real, c2.imaginary);
	
	return 0;
}