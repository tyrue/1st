/************
 파일 : address.c
 ************/

#include <stdio.h>
int main(void)
{
	char ch = 'a'; // char형 변수 선언
	int num = 100; // int형 변수 선언
	double real[2] = {3.14, 1.87}; // double형 배열 변수 선언
	
	printf("char 변수(ch) 값 %6c의 주소는 %p이며, 10진수로 %8u이다.\n",ch, &ch, &ch); // 변수 ch의 값과 주소값을 나타낸다.
	printf("int 변수(num) 값 %6d의 주소는 %p이며, 10진수로 %8u이다.\n",num, &num, &num); // 변수 num의 값과 주소값을 나타낸다.
	printf("\n변수 ch와 변수 num의 주소값의 차이는 %u이다\n\n",(unsigned)&ch-(unsigned)&num); 
	printf("double 변수(real[1]) 값%6.2f의 주소는 %p이며, 10진수로 %8u이다.\n",real[1], &real[1], &real[1]); //배열 변수 real[1]의 값과 주소값을 나타낸다.
	printf("double 변수(real[0]) 값%6.2f의 주소는 %p이며, 10진수로 %8u이다.\n",real[0], &real[0], &real[0]); //배열 변수 real[0]의 값과 주소값을 나타낸다.
	printf("\n변수 num과 변수 real[0]의 주소값의 차이는 %u이다\n\n",(unsigned)&num-(unsigned)&real[0]);
	return 0; // 프로그램 종료
}
/*** End of address.c***/