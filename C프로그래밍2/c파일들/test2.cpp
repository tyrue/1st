#include <stdio.h>
void valueSwap(int a,int b);
void referenceSwap(int *a,int *b);
int main(void)
{
	int a=2;
	int b=3;
	printf("valueSwap 전 a=%d b=%d\n",a,b);
	valueSwap(a,b);
	printf("valueSwap 후 a=%d b=%d\n",a,b);
	printf("referenceSwap 전 a=%d b=%d\n",a,b);
	referenceSwap(&a,&b);
	printf("referenceSwap 후 a=%d b=%d\n",a,b);
	scanf("%d",&a);
}
void valueSwap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;	
	printf("valueSwap 내부 a=%d b=%d\n",a,b);
}
void referenceSwap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
	printf("referenceSwap 내부 a=%d b=%d\n",*a,*b);
}