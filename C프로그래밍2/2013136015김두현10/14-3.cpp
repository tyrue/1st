#include <stdio.h>

int main(void)
{
	int i = 0;
	int point[] = {95, 88, 76, 54, 85, 33, 65, 78, 99, 82};
	int aryLength = sizeof (point)/sizeof (int);

	printf("�迭point[i]�� �̿��Ͽ� ���Ұ��� ���\n");
	for(i=0;i<aryLength;i++)
	{
		printf("%d%s",point[i],i == aryLength - 1?"\n\n":", ");
	}

	printf("�ּ� ��� point�� �̿��Ͽ� ������ �ּҰ��� ���Ұ��� ���\n");
	for(i=0;i<aryLength;i++)
	{
		printf("(point + %d) == %p, *(point + %d) == %d\n",i,(point+i),i,*(point+i));
	}
	return 0;
	
}
