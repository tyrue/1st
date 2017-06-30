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
	} yours = {"A Book On C","Al Kelly","홍릉과학출판사", 830, 24000};
	
	struct book
	{
		char title[50];
		char author[50];
		char publish[50];	
		int pages;
		int price;
	} webook, mybook = {"C@PL.com", "강 환수", "인피니티북스", 530, 20000};

	printf("구조체 struct book의 사이즈는 sizeof (struct book) = %d\n\n", sizeof (struct book));

	printf("C 언어 국내 서적\n\n");
	printf("저자: %s, 제목: %s, 페이지수: %d\n출판사: %s, 가격: %d\n\n",mybook.author,mybook.title,mybook.pages,mybook.publish,mybook.price);
	printf("저자: %s, 제목: %s, 페이지수: %d\n출판사: %s, 가격: %d\n\n",yours.author,yours.title,yours.pages,yours.publish,yours.price);
	
	webook = mybook;

	printf("저자: %s, 제목: %s, 페이지수: %d\n출판사: %s, 가격: %d\n",webook.author,webook.title,webook.pages,webook.publish,webook.price);
	
	return 0;

}

