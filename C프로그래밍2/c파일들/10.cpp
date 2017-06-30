#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIMIT 20
void great(int scan[20]);
int main(void)
{
	int seed,num=0;
	seed=time(NULL);
	srand(seed);
	int i,j;
	int scan[20]={};
	for(i=0;i<100;i++)
	{
		num=rand()%LIMIT+1;
		printf("%d ",num);
		for(j=0;j<20;j++)
		{
			if(num==(j+1))
				scan[j]++;
		}
	}
	printf("\n");
	for(i=0;i<20;i++)
	{
		printf("%d의 갯수는 %d개",i+1,scan[i]);
		printf("\n");
	}
	great(scan);
	scanf("%d",&num);
}
void great(int scan[20])
{
	int first=0;
	int	second=0;
	int i;
	int num=0;
	for(i=0;i<20;i++)
	{
		
		if(first<=scan[i])
		{
			second=first;
			first=scan[i];
			num=i+1;
		}
	}
	printf("숫자 %d이 %d번으로 가장 많이 나왔습니다.\n",num,first);
}