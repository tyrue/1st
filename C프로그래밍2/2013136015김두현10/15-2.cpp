#include <stdio.h>

int main(void)
{
	int i = 0;
	char strary[][5] = {"c", "c++", "java", "c#"};
	char *pary[] = {"AT&t", "AT&t", "Sun", "MS"};

	printf("�� ���ڿ� ���>> \n");
	for (i = 0; i < 4;) printf("%-8s", strary[i++]);
	printf("\n");
	for (i = 0; i < 4;) printf("%-8s", *(strary + i++));
	printf("\n");
	for (i = 0; i < 4;) printf("%8s", pary[i++]);
	printf("\n");
	for (i = 0; i < 4;) printf("%8s", *(pary + i++));
	printf("\n\n");

	printf("�� ���ڿ��� ù ���� ���>> \n");
	for (i = 0; i < 4; ) printf("%-8c", *strary[i++]);
	printf("\n");
	for (i = 0; i < 4; ) printf("%-8c", *pary[i++]);
	printf("\n\n");

	printf("�� ���ڿ��� ���� ���� ���>> \n");
	printf("C++�� �� + ��� strary[1][1] = %c\n",strary[1][1]);
	printf("Sun�� �� u ��� *(*(pary + 2) + 1) = %c\n",*(*(pary + 2) + 1));
	
	return 0;

}