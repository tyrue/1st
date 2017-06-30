#include <stdio.h>
void printArray(int n1,int n2, int a[][3]);
int main(void)
{
	int a[3][2]={{3,2},{2,3},{4,5}};
	int b[2][3]={{1,2,5},{3,6,9}};
	int c[3][3]={};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j];
			
		}
		
	}
	printArray(3,3,c);
	scanf("%d",&i);
}
void printArray(int n1,int n2, int a[][3])
{
	int i,j;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
			{
				printf("%d ",a[i][j]);
			}
		printf("\n");
	}
}
	