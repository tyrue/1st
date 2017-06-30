#include <stdio.h>
#include <math.h>
#define SIZE 60
int main(void)
{
	char str[SIZE],op;
	int Index1,Index2,i=0;
	int num1=0;
	int	num2=0;	
	scanf("%s",str);
	for(i=0;i<SIZE;i++)
	{
		if(str[i]=='+'|| str[i]=='-'|| str[i]=='*'|| str[i]=='/')
			Index1=i;
		if(str[i]==NULL)
		{
			Index2=i-1;
			break;
		}
	}
	for(i=0;i<Index1;i++)
			{
				str[i]=str[i]-'0';				
				num1=num1+str[i]*pow(10.0,Index1-(i+1));
			}					
			for(i=Index1+1;i<=Index2;i++)
			{
				str[i]=str[i]-'0';
				num2=num2+str[i]*pow(10.0,(Index2-i));
			}
	op=str[Index1];
	switch(op)
	{
	case '+' :
			printf("%d",num1+num2);
			break;
	case '-':			
			printf("%d",num1-num2);
			break;
	case '*' :			
			printf("%d",num1*num2);
			break;
	case '/':			
			printf("%d",num1/num2);
			break;
	}
	printf("\n");
	scanf("%d",&i);
}