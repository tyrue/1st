#include <stdio.h>

int main(void)
{
	int i = 0;
	int point[] = {95, 88, 76, 54, 85, 33, 65, 78, 99, 82};
	int aryLength = sizeof (point)/sizeof (int);

	printf("배열point[i]를 이용하여 원소값을 출력\n");
	for(i=0;i<aryLength;i++)
	{
		printf("%d%s",point[i],i == aryLength - 1?"\n\n":", ");
	}

	printf("주소 상수 point를 이용하여 원소의 주소값과 원소값을 출력\n");
	for(i=0;i<aryLength;i++)
	{
		printf("(point + %d) == %p, *(point + %d) == %d\n",i,(point+i),i,*(point+i));
	}
	return 0;
	
}
