#include <stdio.h>
void reverse(char *line);
int main(void)
{
	char line[81];
	char *ptr;
	int cnt;

	char *str = "객체지향 언어를 하나 써 보세요?";
	puts(str);
	gets(line);
	printf("%s를 아신다고요. 대단하십니다.\n",line);
	cnt = puts("아시는 클래스 이름(영어)를 적어보세요?");

	ptr = gets(line);
	while (*ptr) putchar(* ptr++);
	printf("\n");

	reverse(line);
	puts(", 아이고 아시는 것을 반대로 출력했네요!!!");
	
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
