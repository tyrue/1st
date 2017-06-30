#include <stdio.h>

int main(void)
{
	int year,month;
	int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("년도를 입력하세요 ");
	scanf("%d",&year);
	printf("달을 입력하세요 ");
	scanf("%d",&month);
	if(!(year%400)||(year%100&&!(year%4)))
		mon[1]=29;
	printf("년도=%d 달=%d 달의 말일=%d \n",year,month,mon[month-1]);
	scanf("%d",&year);
}
	