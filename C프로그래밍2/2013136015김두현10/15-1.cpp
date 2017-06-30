#include <stdio.h>

int main(void)
{
	int i=0;
	char c1[]= {'C',' ','l','a','n','g','u','a','g','e','\0'};
	char cerr[] = {'C',' ','l','a','n','g','u','a','g','e'};

	char c2[] = "C lagnuage";
	char c3[15] = "C lagnuage";
	char *c4 = "C lagnuage";

	printf("각 변수의 크기는>> \n");
	printf("c1 = %d, cerr = %d, c2= %d, c3 = %d, c4 = %d\n\n",sizeof c1, sizeof cerr, sizeof c2, sizeof c3, sizeof c4);
	printf("c1 = %12s, cerr = %12s\n",c1, cerr);
	printf("c2 = %12s, c3 = %12s, c4 = %12s\n\n",c2,c3,c4);

	//문자 배열의 각 원소를 하나하나 출력
	printf("문자 배열의 각 원소를 하나하나 출력 >> ");
	while(c1[i] != '\0') printf("%c", c1[i++]);
	printf("\n");

	i = 0;
	printf("문자 포인터의 각 원소를 하나하나출력 >> ");
	while(*(c4 + i) != '\0') printf("%c", *(c4 + i++));
	printf("\n");

	printf("문자 포인터의 각 원소를 하나하나 출력 >> ");
	while(*(c4) != '\0') printf("%c", *(c4++));
	printf("\n");
	return 0;
}