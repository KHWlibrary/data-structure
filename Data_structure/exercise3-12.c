/* 1���� ����,�ִ� ũ�Ⱑ 20�� ���ڿ��� �̷���� ����ü ������ �� �ֵ��� ���� �޸𸮸� �Ҵ� �ް�
���⿡ ���� 100�� ���ڿ� "just testing����", ���� �޸𸮸� �ݳ��ϴ� ���α׷�*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct{
	char string[20];		//�ִ�ũ�� 20�� ���ڿ� 
	int num;				//���� ��
}testdata;
int main(void)
{
	testdata* p;

	p = (testdata*)malloc( sizeof(testdata));
	if (p == NULL) {
		fprintf(stderr, "�޸𸮰� �����ؼ� �Ҵ��� �� �����ϴ�\n");
		exit(1);
	}
	
	strcpy_s(p->string, sizeof(p->string), "just testing");
	p->num = 100;

	printf("String: %s\n", p->string);
	printf("Number: %d\n", p->num);

	free(p);		//���� �޸� ����
	return 0;

}