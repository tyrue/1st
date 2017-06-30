#include <stdio.h>
typedef struct
{
	char name[20];
	char call[50];
	char adress[50];
}person;


typedef union 
	{
		person ps;
		char company[50];
		
	} master;

typedef struct
{
	int year;
	char carname[10];
	master ms;
}car;


int main(void)
{
	car c1={2013,"¼Ò³ªÅ¸","»ï¼þ"};


	car c2={2013,"¾Æ¹Ý¶¼", {"±èµÎÇö","010-1234-5678","´ëÀü¼­±¸°¡¼ö¿øµ¿\n"} };
	printf("%d %s %s\n",c1.year,c1.carname,c1.ms.company);
	printf("%d %s %s %s %s",c2.year,c2.carname,c2.ms.ps.name,c2.ms.ps.call,c2.ms.ps.adress);
	
	
}