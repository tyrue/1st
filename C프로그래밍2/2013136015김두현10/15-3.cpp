#include <stdio.h>
void reverse(char *line);
int main(void)
{
	char line[81];
	char *ptr;
	int cnt;

	char *str = "��ü���� �� �ϳ� �� ������?";
	puts(str);
	gets(line);
	printf("%s�� �ƽŴٰ��. ����Ͻʴϴ�.\n",line);
	cnt = puts("�ƽô� Ŭ���� �̸�(����)�� �������?");

	ptr = gets(line);
	while (*ptr) putchar(* ptr++);
	printf("\n");

	reverse(line);
	puts(", ���̰� �ƽô� ���� �ݴ�� ����߳׿�!!!");
	
	return 0;
}
void reverse(char *line)
{
	char ch = *line;

	if (ch)
	{
		reverse(++line);
		printf("%c",ch);
	}
}
