#include <stdio.h>
#define SIZE 4
int main(void)
{

	char a[SIZE];
	
	int num=2;
	int i;
	char* c="wow";
	char* d="yes";
	void *b[SIZE]={c,(void*)num,d,(void*)num};
	
	for(i=0;i<SIZE;i++)
	{
		if(i%2==0)
			a[i]='i';
		else if(i%2==1)
			a[i]='s';
	}

	for(i=0;i<SIZE;i++)
	{
		if(a[i]=='i')
			{
			 printf("%s ",(char*)b[i]);
			}
		else if(a[i]=='s')
		{
			printf("%d ",(int*)b[i]);
		}
	}
	scanf("%d",&i);
}