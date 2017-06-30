#include <stdio.h>

int main(void)
{
	struct
	{
		char title[50];
		char author[50];
		char publish[50];
	} yours ;

	struct book
	{
		char title[50];
		char author[50];
		char publish[50];
		int pages;
		int price;
	} webook;

	struct book mybook;

	printf("변수 yours의 사이즈는 sizeof (yours) = %d\n\n",sizeof (yours));
	printf("struct book의 사이즈는 sizeof (struct book) = %d\n",sizeof (struct book));
	printf("변수 mybook의 사이즈는 sizeof (mybook) = %d\n",sizeof (mybook));
	printf("변수 webook의 사이즈는 sizeof (webook) = %d\n",sizeof (webook));
	return 0;
	
}