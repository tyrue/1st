#include <stdio.h>
#include <stdlib.h>
int math(int num1,char op, int num2);

int main(void)
{			
		int num1,num2;
		char op;
		FILE * fp;
		FILE * fp2;
		if((fp=fopen("input.txt","r"))==NULL)
		{
			printf("파일이 열리지 않습니다.\n");
			exit(1);
		};
		if((fp2=fopen("output.txt","w"))==NULL)
		{
			printf("파일이 열리지 않습니다.\n");
			exit(1);
		};
		while(!feof(fp))
		{
			fscanf(fp,"%d %c %d =\n",&num1,&op,&num2);
			fprintf(stdout,"%d %c %d =\n",num1,op,num2);
		
			fprintf(fp2,"%d\n",math(num1,op,num2));
			fprintf(stdout,"%d\n",math(num1,op,num2));
			
		}
		fclose(fp);
		fclose(fp2);
		scanf("%d",&num1);
}		
int math(int num1,char op, int num2)
{ 
	int result=0;
	if(op=='+')
		return result=(num1+num2);
	if(op=='-')
		return result=(num1-num2);
	if(op=='*')
		return result=(num1*num2);
	if(op=='/')
		return result=(num1/num2);
}
