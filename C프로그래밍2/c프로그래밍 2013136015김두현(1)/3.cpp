#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIMIT 45
int main(void)
{
	int num=0;
	int seed=0;
	int i;
	
	seed=time(NULL);
	srand(seed);
	
	for(i=0;i<6;i++)
	{	
		num=rand()%LIMIT+1;
		printf("%d ",num);
	}
	printf("\n");
	scanf("%d",&i);
}
