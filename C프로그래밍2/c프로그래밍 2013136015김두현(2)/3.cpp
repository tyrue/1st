#include <stdio.h>
#define SIZE 30
int main(void)
{
	int i,j,test;
	char words[SIZE];
	printf("���ڿ��� �Է��ϼ���.\n");
	scanf("%s",words);	
	for(i=0;i<SIZE;i++)
	{
		if(words[i]==0)
			{
				test=i;
				break;
			}
	}
	printf("����=%s ������ ����=%d\n",words,test);
	printf("������ �ٲ㺸��!\n");
	for(i=test-1;i>=0;i--)
	{
		printf("%c",words[i]);
	}
	printf("\n");
	scanf("%d",&i);
}