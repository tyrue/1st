#include <stdio.h>

int main(void)
{
	struct 
	{
		char title[50];
		char author[50];
		char publish[50];	
		int pages;
		int price;
	} yours = {"A Book On C","Al Kelly","ȫ���������ǻ�", 830, 24000};
	
	struct book
	{
		char title[50];
		char author[50];
		char publish[50];	
		int pages;
		int price;
	} webook, mybook = {"C@PL.com", "�� ȯ��", "���Ǵ�Ƽ�Ͻ�", 530, 20000};

	printf("����ü struct book�� ������� sizeof (struct book) = %d\n\n", sizeof (struct book));

	printf("C ��� ���� ����\n\n");
	printf("����: %s, ����: %s, ��������: %d\n���ǻ�: %s, ����: %d\n\n",mybook.author,mybook.title,mybook.pages,mybook.publish,mybook.price);
	printf("����: %s, ����: %s, ��������: %d\n���ǻ�: %s, ����: %d\n\n",yours.author,yours.title,yours.pages,yours.publish,yours.price);
	
	webook = mybook;

	printf("����: %s, ����: %s, ��������: %d\n���ǻ�: %s, ����: %d\n",webook.author,webook.title,webook.pages,webook.publish,webook.price);
	
	return 0;

}

