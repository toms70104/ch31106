#include <stdio.h>
#include <stdlib.h>

char input;

int main(void)
{
	printf("請輸入一個英文字母:");
	input = getchar();
	printf("轉換大小寫後:");
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