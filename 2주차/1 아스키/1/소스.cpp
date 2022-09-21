#include <stdio.h>
int main(void)
{
	char ch;

	printf("letter input : ");
	scanf_s("%c", &ch);

	printf("The ASCII code of %c is %d.\n", ch, ch);


	return 0;
}