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

	printf("���� yours�� ������� sizeof (yours) = %d\n\n",sizeof (yours));
	printf("struct book�� ������� sizeof (struct book) = %d\n",sizeof (struct book));
	printf("���� mybook�� ������� sizeof (mybook) = %d\n",sizeof (mybook));
	printf("���� webook�� ������� sizeof (webook) = %d\n",sizeof (webook));
	return 0;
	
}