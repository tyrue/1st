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
	printf("무엇을 하시겠습니까?\n");
	printf("1: 정보 저장 2: 정보 검색 3: 추가 저장 4: 백업 파일 생성 -1: 끝\n");
	fflush(stdin); //버퍼 삭제
	scanf("%d",&num);
		if((num<1 || num>4) && num!=-1)
		{
			printf("다시입력하세요\n");
		}
		else if(num==1)
		{
			if((f=fopen("test.txt","w"))==NULL)
			{
				printf("파일이 열리지 않습니다.\n");
				exit(1);
			};
			write(f);	
		}
		else if(num==2)
		{
			if((f=fopen("test.txt","r"))==NULL)
			{
				printf("파일이 열리지 않습니다.\n");
				exit(1);
			};
			read(f);
		}
		else if(num==3)
		{
			if((f=fopen("test.txt","a+"))==NULL)
			{
				printf("파일이 열리지 않습니다.\n");
				exit(1);
			};
			add(f);	
		}
		else if(num==4)
		{
			if((f=fopen("test.txt","r+"))==NULL)
			{
				printf("파일이 열리지 않습니다.\n");
				exit(1);
			};
			backup(f);	
		}
		else if(num==-1)
		{
			printf("프로그램을 종료합니다\n");
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
		printf("%d번째 정보를 입력합니다.\n",cnt);
		me.num=cnt;
		printf("이름을 입력하세요\n");
		fgets(me.name,20,stdin);
		fgets(me.name,20,stdin);
		printf("전화번호를 입력하세요\n");
		fgets(me.call,15,stdin);
		printf("주소를 입력하세요\n");
		fgets(me.adress,20,stdin);
		fwrite(&me,sizeof(inform),1,f);
		//fprintf(f,"%d %s%s%s\n",me.num,me.name,me.call,me.adress);
		printf("더 입력 하시겠습니까?\n예=1 아니오=2\n");
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
				printf("다시 입력해주세요\n");
			}
		   printf("더 입력 하시겠습니까?\n예=1 아니오=2\n");
		   scanf("%d",&num);
		}
		cnt++;
	}	
}
void read(FILE*f)
{
	int i,num=0;
	char names[50];
	printf("찾으실 이름을 입력하세요\n");
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
					printf("정보를 찾았습니다.\n");
					printf("%d번째 정보에 있습니다.\n",me.num);
					fprintf(stdout,"이름=%s전화번호=%s주소=%s\n",me.name,me.call,me.adress);
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
		printf("%d번째 정보를 입력합니다.\n",cnt);
		printf("이름을 입력하세요\n");
		fgets(me.name,20,stdin);
		fgets(me.name,20,stdin);
		printf("전화번호를 입력하세요\n");
		fgets(me.call,15,stdin);
		printf("주소를 입력하세요\n");
		fgets(me.adress,20,stdin);
		fwrite(&me,sizeof(inform),1,f);
		printf("더 입력 하시겠습니까?\n예=1 아니오=2\n");
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
			printf("다시 입력해주세요\n");
		    printf("더 입력 하시겠습니까?\n예=1 아니오=2\n");
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
			printf("파일이 열리지 않습니다.\n");
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
	printf("백업을 성공하였습니다.\n");
	fclose(f2);
	fclose(f);
}