#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <ctype.h>

void print2char(char);

int main(void)
{
	char ch;

	printf("���ĺ�(����x) �Ǵ� �ٸ� ���� �Է��ϼ���.\n");
	do
	{
		printf("���� �Է� �� Enter: ");
		scanf("%c", &ch);
		getchar();
		if (isalpha(ch))
			print2char(ch);
		else
			printf("�Է�: %c\n", ch);
	} while (ch != 'x' && ch != 'X');

	return 0;
}

void print2char(char ch)
{
	if (isupper(ch))
		printf("�Է�: %c, ��ȯ: %c\n", ch, tolower(ch));
	else
		printf("�Է�: %c, ��ȯ: %c\n", ch, toupper(ch));

	return;
}