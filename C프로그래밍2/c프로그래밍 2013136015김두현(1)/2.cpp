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
	printf("��ǻ�Ϳ� ������������ ����!\n0=���� 1=���� 2=�� �Դϴ�.\n");
	while(scanf("%d",&player))
	{
	com=rand()%3;
   	if(player<0||player>2)
	{	
		printf("�ٽ� �Է����ּ���\n");
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
		printf("�����ϴ�.\n");
	else if(com==0&&play==1)
	{
		printf("����� �̰���ϴ�.\n");
		
	}
	else if(com==0&&play==2)
	{	
		printf("��ǻ�Ͱ� �̰���ϴ�.\n");
		
	}
	else if(com==1&&play==2)
	{	
		printf("����� �̰���ϴ�.\n");
		
	}
	else if(com==1&&play==0)
	{		
		printf("��ǻ�Ͱ� �̰���ϴ�.\n");
		
	}
	else if(com==2&&play==0)
	{
		printf("����� �̰���ϴ�.\n");
		
	}
	else if(com==2&&play==1)
	{	
		printf("��ǻ�Ͱ� �̰���ϴ�.\n");
		
	}
}
void printkbb(int com,int play)
{
	if(com==0)
		printf("��= ����\n");
	if(com==1)
		printf("��= ����\n");
	if(com==2)
		printf("��= ��\n");
	if(play==0)
		printf("���= ����\n");
	if(play==1)
		printf("���= ����\n");
	if(play==2)
		printf("���= ��\n");
	
}
