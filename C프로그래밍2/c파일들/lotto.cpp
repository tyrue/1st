#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIMIT 45
void relotto(int lotto[7]);
void result(int lotto[7],int play[7]);
int main(void)
{
	int lotto[7];
	int play[7];
	int seed=0;
	seed=time(NULL);
	srand(seed);
	int i,j;
	for(i=0;i<7;i++)
	{	
		lotto[i]=rand()%LIMIT+1;
	}	
	relotto(lotto);
	printf("로또에 도전해보세요!\n1~45까지의 7개의 정수를 입력하세요\n");
	for(i=0;i<7;i++)
	{	
		scanf("%d",&play[i]);
		for(j=0;j<i;j++)
		{
			if(play[i]==play[j])
			{
				printf("다시입력해주세요\n");
				i--;
				break;
			}
		}
		if(play[i]<1||play[i]>45)
		{
			printf("다시입력해주세요\n");
			i--;
			continue;
		}
	}
	result(lotto,play);
	scanf("%d",&i);
}
void relotto(int lotto[7])
{
	int i,j;
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			if(lotto[i]==lotto[j])
			{
				if(i==j)
				{
					break;
				}
				lotto[i]=rand()%LIMIT+1;
				
			}
		}
	}
}
void result(int lotto[7],int play[7])
{
	int grade=0;
	int i,j;
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			if(lotto[i]==play[j])
			{
				grade++;
			}
		}
	}		
	for(i=0;i<7;i++)
	{	
		printf("%d ",lotto[i]);
	}
	printf("\n");
	for(i=0;i<7;i++)
	{	
		printf("%d ",play[i]);
	}
	printf("\n");
	printf("맞은 숫자 갯수 = %d\n",grade);
	if((grade==6)&&(lotto[6]!=play[6])||grade==7)
		printf("축하합니다 1등에 당첨되셨습니다.\n");
	else if((grade==6)&&(lotto[6]==play[6]))
		printf("축하합니다 2등에 당첨되셨습니다.\n");
	else if(grade==5)
		printf("축하합니다 3등에 당첨되셨습니다.\n");
	else if(grade==4)
		printf("축하합니다 4등에 당첨되셨습니다.\n");
	else if(grade==3)
		printf("축하합니다 5등에 당첨되셨습니다.\n");
	else if(grade<=2)
		printf("축하합니다 꽝에 당첨되셨습니다.\n");
}