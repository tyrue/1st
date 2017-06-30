#include <stdio.h>

int main(void)
{
	int i = 0;
	char strary[][5] = {"c", "c++", "java", "c#"};
	char *pary[] = {"AT&t", "AT&t", "Sun", "MS"};

	printf("각 문자열 출력>> \n");
	for (i = 0; i < 4;) printf("%-8s", strary[i++]);
	printf("\n");
	for (i = 0; i < 4;) printf("%-8s", *(strary + i++));
	printf("\n");
	for (i = 0; i < 4;) printf("%8s", pary[i++]);
	printf("\n");
	for (i = 0; i < 4;) printf("%8s", *(pary + i++));
	printf("\n\n");

	printf("각 문자열의 첫 글자 출력>> \n");
	for (i = 0; i < 4; ) printf("%-8c", *strary[i++]);
	printf("\n");
	for (i = 0; i < 4; ) printf("%-8c", *pary[i++]);
	printf("\n\n");

	printf("각 문자열의 개별 문자 출력>> \n");
	printf("C++의 앞 + 출력 strary[1][1] = %c\n",strary[1][1]);
	printf("Sun의 앞 u 출력 *(*(pary + 2) + 1) = %c\n",*(*(pary + 2) + 1));
	
	return 0;

}