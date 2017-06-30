#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void kbb(int com,int play);
void printkbb(int com,int play);
int main(void)
{
	int seed;
	int com=0;
	int player=0;
	seed=time(NULL);
	srand(seed);
	printf("컴퓨터와 가위바위보를 하자!\n0=가위 1=바위 2=보 입니다.\n");
	while(scanf("%d",&player))
	{
	com=rand()%3;
   	if(player<0||player>2)
	{	
		printf("다시 입력해주세요\n");
		continue;
	}
	printkbb(com,player);
	kbb(com,player);
	
	if(!(com==player))
		break;
	}
	scanf("%d",&com);
}
void kbb(int com,int play)
{
	if(com==play)
		printf("비겼습니다.\n");
	else if(com==0&&play==1)
	{
		printf("당신이 이겼습니다.\n");
		
	}
	else if(com==0&&play==2)
	{	
		printf("컴퓨터가 이겼습니다.\n");
		
	}
	else if(com==1&&play==2)
	{	
		printf("당신이 이겼습니다.\n");
		
	}
	else if(com==1&&play==0)
	{		
		printf("컴퓨터가 이겼습니다.\n");
		
	}
	else if(com==2&&play==0)
	{
		printf("당신이 이겼습니다.\n");
		
	}
	else if(com==2&&play==1)
	{	
		printf("컴퓨터가 이겼습니다.\n");
		
	}
}
void printkbb(int com,int play)
{
	if(com==0)
		printf("컴= 가위\n");
	if(com==1)
		printf("컴= 바위\n");
	if(com==2)
		printf("컴= 보\n");
	if(play==0)
		printf("당신= 가위\n");
	if(play==1)
		printf("당신= 바위\n");
	if(play==2)
		printf("당신= 보\n");
	
}
