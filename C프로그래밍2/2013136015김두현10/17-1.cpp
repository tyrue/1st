#include <stdio.h>
#include <stdlib.h>

int main()
{
	char fname[] = "basic.txt";
	char name[30];
	FILE *f;
	int point;

	if((f = fopen(fname, "w"))== NULL)
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	};

	printf("이름과 성적을 입력하세요\n");
	scanf("%s%d", name, &point);

	fprintf(f,"이름이 %s인 학생의 성적은 %d 입니다.\n", name, point);

	fclose(f);
	return 0;
}