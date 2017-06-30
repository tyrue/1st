#include <stdio.h>
#include <stdlib.H>
#include <string.h>
void write(FILE *f);
void read(FILE *f);
void add(FILE *f);
void backup(FILE*f);
typedef struct
{
	int num;
	char name[20];
	char call[15];
	char adress[20];
} inform;
inform me;
int main(void)
{
	FILE *f;
	int num;
	while(1)
	{
	printf("������ �Ͻðڽ��ϱ�?\n");
	printf("1: ���� ���� 2: ���� �˻� 3: �߰� ���� 4: ��� ���� ���� -1: ��\n");
	fflush(stdin); //���� ����
	scanf("%d",&num);
		if((num<1 || num>4) && num!=-1)
		{
			printf("�ٽ��Է��ϼ���\n");
		}
		else if(num==1)
		{
			if((f=fopen("test.txt","w"))==NULL)
			{
				printf("������ ������ �ʽ��ϴ�.\n");
				exit(1);
			};
			write(f);	
		}
		else if(num==2)
		{
			if((f=fopen("test.txt","r"))==NULL)
			{
				printf("������ ������ �ʽ��ϴ�.\n");
				exit(1);
			};
			read(f);
		}
		else if(num==3)
		{
			if((f=fopen("test.txt","a+"))==NULL)
			{
				printf("������ ������ �ʽ��ϴ�.\n");
				exit(1);
			};
			add(f);	
		}
		else if(num==4)
		{
			if((f=fopen("test.txt","r+"))==NULL)
			{
				printf("������ ������ �ʽ��ϴ�.\n");
				exit(1);
			};
			backup(f);	
		}
		else if(num==-1)
		{
			printf("���α׷��� �����մϴ�\n");
			break;
		}	
	}
}
void write(FILE *f)
{
	int cnt=1;
	int num=0;
	while(1)
	{
		printf("%d��° ������ �Է��մϴ�.\n",cnt);
		me.num=cnt;
		printf("�̸��� �Է��ϼ���\n");
		fgets(me.name,20,stdin);
		fgets(me.name,20,stdin);
		printf("��ȭ��ȣ�� �Է��ϼ���\n");
		fgets(me.call,15,stdin);
		printf("�ּҸ� �Է��ϼ���\n");
		fgets(me.adress,20,stdin);
		fwrite(&me,sizeof(inform),1,f);
		//fprintf(f,"%d %s%s%s\n",me.num,me.name,me.call,me.adress);
		printf("�� �Է� �Ͻðڽ��ϱ�?\n��=1 �ƴϿ�=2\n");
			scanf("%d",&num);
		while(1)
		{
			if(num==1)
			{	
				num=0;
				break;
			}
			if(num==2)
			{
				fclose(f);
				return;
			}
			if(num<1||num>2)
			{
				fflush(stdin);
				printf("�ٽ� �Է����ּ���\n");
			}
		   printf("�� �Է� �Ͻðڽ��ϱ�?\n��=1 �ƴϿ�=2\n");
		   scanf("%d",&num);
		}
		cnt++;
	}	
}
void read(FILE*f)
{
	int i,num=0;
	char names[50];
	printf("ã���� �̸��� �Է��ϼ���\n");
    scanf("%s",names);
	while(!feof(f))
	{
		fread(&me,sizeof(inform),1,f);
		for(i=0;i<strlen(names);i++)
		{
			if(names[i]==me.name[i])
			{
				num++;
				if(num==strlen(names))
				{		
					printf("������ ã�ҽ��ϴ�.\n");
					printf("%d��° ������ �ֽ��ϴ�.\n",me.num);
					fprintf(stdout,"�̸�=%s��ȭ��ȣ=%s�ּ�=%s\n",me.name,me.call,me.adress);
					fclose(f);
					return;
				}		
			}   
		}	
	}
}
void add(FILE *f)
{
	int cnt=0;
	int test=(long)sizeof(inform);
	fseek(f,-(test+3),SEEK_END);
	fread(&me,sizeof(inform),1,f);
	cnt=me.num+1;
	fseek(f,0,SEEK_END);
	int num=0;
	while(1)
	{
		me.num=cnt;
		printf("%d��° ������ �Է��մϴ�.\n",cnt);
		printf("�̸��� �Է��ϼ���\n");
		fgets(me.name,20,stdin);
		fgets(me.name,20,stdin);
		printf("��ȭ��ȣ�� �Է��ϼ���\n");
		fgets(me.call,15,stdin);
		printf("�ּҸ� �Է��ϼ���\n");
		fgets(me.adress,20,stdin);
		fwrite(&me,sizeof(inform),1,f);
		printf("�� �Է� �Ͻðڽ��ϱ�?\n��=1 �ƴϿ�=2\n");
			scanf("%d",&num);
		while(1)
		{
			if(num==1)
			{	
				num=0;
				break;
			}
			if(num==2)
			{
				fclose(f);
				return;
			}
			if(num<1||num>2)
			printf("�ٽ� �Է����ּ���\n");
		    printf("�� �Է� �Ͻðڽ��ϱ�?\n��=1 �ƴϿ�=2\n");
		    scanf("%d",&num);
		}
		cnt++;
	}	
}
void backup(FILE *f)
{
	int wow=0;
	FILE *f2;
	if((f2=fopen("test2.txt","w+"))==NULL)
		{
			printf("������ ������ �ʽ��ϴ�.\n");
			exit(1);
		};
	fseek(f,0,SEEK_SET);
	while(!feof(f))
	{
		fread(&me,sizeof(inform),1,f);
		if(wow==me.num)
			break;
		fprintf(f2,"%d %s%s%s\n",me.num,me.name,me.call,me.adress);
		wow=me.num;
	}
	printf("����� �����Ͽ����ϴ�.\n");
	fclose(f2);
	fclose(f);
}