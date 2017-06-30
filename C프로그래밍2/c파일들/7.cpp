#include <stdio.h>
void printArray(int num1,int num2,int a[][5]);
int main(void)
{
	int i,j;
	int a[5][5]={{35,28,67,73},{25,32,12,69},{97,56,14,23},{45,97,48,15}};
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			a[i][4]=a[i][j]+a[i][4];
			a[4][i]=a[j][i]+a[4][i];
			
		}
	a[4][4]=a[4][i]+a[4][4];	
	}
	
	printArray(4,4,a);
	scanf("%d",&i);
}
void printArray(int num1,int num2,int a[][5])
{
	int i,j;
	for(i=0;i<=num1;i++)
	{	for(j=0;j<=num2;j++)
		{		
			printf("%d  ",a[i][j]);

		}
	printf("행 합=%d",a[i][4]);	
	printf("\n");
	}
	for(i=0;i<num1;i++)
	{
		printf("열 합=%d ",a[4][i]);
	}
	printf("전체 합=%d",a[4][4]);
}
	