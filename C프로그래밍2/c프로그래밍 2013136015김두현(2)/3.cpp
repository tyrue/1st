#include <stdio.h>
#define SIZE 30
int main(void)
{
	int i,j,test;
	char words[SIZE];
	printf("문자열를 입력하세요.\n");
	scanf("%s",words);	
	for(i=0;i<SIZE;i++)
	{
		if(words[i]==0)
			{
				test=i;
				break;
			}
	}
	printf("문자=%s 문자의 갯수=%d\n",words,test);
	printf("순서를 바꿔보자!\n");
	for(i=test-1;i>=0;i--)
	{
		printf("%c",words[i]);
	}
	printf("\n");
	scanf("%d",&i);
}