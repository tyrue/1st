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
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	};

	printf("�̸��� ������ �Է��ϼ���\n");
	scanf("%s%d", name, &point);

	fprintf(f,"�̸��� %s�� �л��� ������ %d �Դϴ�.\n", name, point);

	fclose(f);
	return 0;
}