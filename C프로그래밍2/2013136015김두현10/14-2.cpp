/*************
���� : pointer.c
*************/
#include <stdio.h>

int main(void)
{
	int i= 10;
	int *pi= &i;

	printf("����pi�� �ּҴ� %p�̸�\n",&pi);
	printf("����pi�� ���ΰ��� �ּҷ� %p�̸�\n",pi);
	printf("����pi�� ����Ű�� �޸𸮿� ����� ���� %d�̴�.\n\n",*pi);
	printf("����i�� �ּҴ� %p�̸�\n",&i);
	printf("���� *pi = i + 2; ������ ���� i�� ����� ���� %d�̴�.\n",i);
	*pi = i + 2;
	printf("���� *pi = i + 2; ������ ���� i�� ����� ���� %d�̴�.\n",i);
	return 0;
}
/*** End of pointer.c ***/