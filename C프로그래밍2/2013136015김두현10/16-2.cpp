#include <stdio.h>

struct book
{
	char title[50];
	char author[50];
	char publish[50];
	int pages;
	int price;
};
typedef struct book book;

typedef struct
{
	char title[50];
	char company[50];
	char kinds[50];
	int size;
	int price;
} software;

int main(void)
{
	book yourbook = {"A Book On C","Al Kelly","ȫ���������ǻ�", 830, 24000};
	book mybook = {"C@PL.com", "�� ȯ��", "���Ǵ�Ƽ�Ͻ�", 530, 20000};
	software visualc = {"Visual C++", "MS", "���ߵ���", 500, 800000};

	printf("C ��� ���� ����\n");
	printf("����: %s, ����: %s, ��������: %d\n",mybook.author,mybook.title,mybook.pages);
	printf("���ǻ�: %s, ����: %d\n",mybook.publish,mybook.price);

	printf("����: %s, ����: %s, ��������: %d\n",yourbook.author,yourbook.title,yourbook.pages);
	printf("���ǻ�: %s, ����: %d\n\n",yourbook.publish,yourbook.price);

	printf("����Ʈ����\n");
	printf("����: %s, ����ȸ��: %s, ����: %s\n",visualc.title,visualc.company,visualc.kinds);
	printf("ũ��: %d, ����: %d\n\n",visualc.size,visualc.price);

	yourbook = mybook;

	printf("���� yourbook = mybook; ���� ��, yourbook ����\n");
	printf("����: %s, ����: %s, ��������: %d\n",yourbook.author,yourbook.title,yourbook.pages);
	printf("���ǻ�: %s, ����: %d\n",yourbook.publish,yourbook.price);
	
	return 0;

}

