#include <stdio.h>
#include <stdlib.h>

char input;

int main(void)
{
	printf("�п�J�@�ӭ^��r��:");
	input = getchar();
	printf("�ഫ�j�p�g��:");
	if (input >= 'A' && input <= 'Z')
	{
		putchar(tolower(input));
	}
	else
	{
		putchar(toupper(input));
	}
	printf("\n");
	system("pause");
}