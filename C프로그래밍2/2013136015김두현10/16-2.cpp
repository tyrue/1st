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
	book yourbook = {"A Book On C","Al Kelly","홍릉과학출판사", 830, 24000};
	book mybook = {"C@PL.com", "강 환수", "인피니티북스", 530, 20000};
	software visualc = {"Visual C++", "MS", "개발도구", 500, 800000};

	printf("C 언어 국내 서적\n");
	printf("저자: %s, 제목: %s, 페이지수: %d\n",mybook.author,mybook.title,mybook.pages);
	printf("출판사: %s, 가격: %d\n",mybook.publish,mybook.price);

	printf("저자: %s, 제목: %s, 페이지수: %d\n",yourbook.author,yourbook.title,yourbook.pages);
	printf("출판사: %s, 가격: %d\n\n",yourbook.publish,yourbook.price);

	printf("소프트웨어\n");
	printf("제목: %s, 제작회사: %s, 종류: %s\n",visualc.title,visualc.company,visualc.kinds);
	printf("크기: %d, 가격: %d\n\n",visualc.size,visualc.price);

	yourbook = mybook;

	printf("문장 yourbook = mybook; 실행 후, yourbook 정보\n");
	printf("저자: %s, 제목: %s, 페이지수: %d\n",yourbook.author,yourbook.title,yourbook.pages);
	printf("출판사: %s, 가격: %d\n",yourbook.publish,yourbook.price);
	
	return 0;

}

