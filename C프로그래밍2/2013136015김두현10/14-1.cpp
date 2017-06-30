/************
 ���� : address.c
 ************/

#include <stdio.h>
int main(void)
{
	char ch = 'a'; // char�� ���� ����
	int num = 100; // int�� ���� ����
	double real[2] = {3.14, 1.87}; // double�� �迭 ���� ����
	
	printf("char ����(ch) �� %6c�� �ּҴ� %p�̸�, 10������ %8u�̴�.\n",ch, &ch, &ch); // ���� ch�� ���� �ּҰ��� ��Ÿ����.
	printf("int ����(num) �� %6d�� �ּҴ� %p�̸�, 10������ %8u�̴�.\n",num, &num, &num); // ���� num�� ���� �ּҰ��� ��Ÿ����.
	printf("\n���� ch�� ���� num�� �ּҰ��� ���̴� %u�̴�\n\n",(unsigned)&ch-(unsigned)&num); 
	printf("double ����(real[1]) ��%6.2f�� �ּҴ� %p�̸�, 10������ %8u�̴�.\n",real[1], &real[1], &real[1]); //�迭 ���� real[1]�� ���� �ּҰ��� ��Ÿ����.
	printf("double ����(real[0]) ��%6.2f�� �ּҴ� %p�̸�, 10������ %8u�̴�.\n",real[0], &real[0], &real[0]); //�迭 ���� real[0]�� ���� �ּҰ��� ��Ÿ����.
	printf("\n���� num�� ���� real[0]�� �ּҰ��� ���̴� %u�̴�\n\n",(unsigned)&num-(unsigned)&real[0]);
	return 0; // ���α׷� ����
}
/*** End of address.c***/