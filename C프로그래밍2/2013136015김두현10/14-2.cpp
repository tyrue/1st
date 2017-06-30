/*************
파일 : pointer.c
*************/
#include <stdio.h>

int main(void)
{
	int i= 10;
	int *pi= &i;

	printf("변수pi의 주소는 %p이며\n",&pi);
	printf("변수pi의 내부값은 주소로 %p이며\n",pi);
	printf("변수pi가 가리키는 메모리에 저장된 값은 %d이다.\n\n",*pi);
	printf("변수i의 주소는 %p이며\n",&i);
	printf("문장 *pi = i + 2; 이전의 변수 i에 저장된 값은 %d이다.\n",i);
	*pi = i + 2;
	printf("문장 *pi = i + 2; 이후의 변수 i에 저장된 값은 %d이다.\n",i);
	return 0;
}
/*** End of pointer.c ***/