#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char fname[] = "grade.txt";
	char name[30];
	FILE *f;
	int point1, point2, cnt = 0;

	if((f = fopen(fname,"w")) == NULL)
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	};

	printf("이름과 성적(중간, 기말)을 입력하세요\n");
	scanf("%s%d%d", name, &point1, &point2);
	fprintf(f,"%d %s %d %d\n", ++cnt, name, point1, point2);
	fclose(f);

	if((f = fopen(fname,"r")) == NULL)
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	};

	fscanf(f,"%d %s %d %d\n", &cnt, name, &point1, &point2);
	fprintf(stdout, "\n%6s%18s%8s%8s\n", "번호", "이름", "중간", "기말");
	fprintf(stdout, "%6d%18s%8d%8d\n", cnt, name, point1, point2);
	fclose(f);
	return 0;
}