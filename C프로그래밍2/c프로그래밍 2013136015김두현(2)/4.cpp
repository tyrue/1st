#include <stdio.h>

int main(void)
{
	int year,month;
	int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("�⵵�� �Է��ϼ��� ");
	scanf("%d",&year);
	printf("���� �Է��ϼ��� ");
	scanf("%d",&month);
	if(!(year%400)||(year%100&&!(year%4)))
		mon[1]=29;
	printf("�⵵=%d ��=%d ���� ����=%d \n",year,month,mon[month-1]);
	scanf("%d",&year);
}
	