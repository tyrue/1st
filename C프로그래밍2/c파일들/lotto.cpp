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
	printf("�ζǿ� �����غ�����!\n1~45������ 7���� ������ �Է��ϼ���\n");
	for(i=0;i<7;i++)
	{	
		scanf("%d",&play[i]);
		for(j=0;j<i;j++)
		{
			if(play[i]==play[j])
			{
				printf("�ٽ��Է����ּ���\n");
				i--;
				break;
			}
		}
		if(play[i]<1||play[i]>45)
		{
			printf("�ٽ��Է����ּ���\n");
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
	printf("���� ���� ���� = %d\n",grade);
	if((grade==6)&&(lotto[6]!=play[6])||grade==7)
		printf("�����մϴ� 1� ��÷�Ǽ̽��ϴ�.\n");
	else if((grade==6)&&(lotto[6]==play[6]))
		printf("�����մϴ� 2� ��÷�Ǽ̽��ϴ�.\n");
	else if(grade==5)
		printf("�����մϴ� 3� ��÷�Ǽ̽��ϴ�.\n");
	else if(grade==4)
		printf("�����մϴ� 4� ��÷�Ǽ̽��ϴ�.\n");
	else if(grade==3)
		printf("�����մϴ� 5� ��÷�Ǽ̽��ϴ�.\n");
	else if(grade<=2)
		printf("�����մϴ� �ο� ��÷�Ǽ̽��ϴ�.\n");
}