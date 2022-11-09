#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

int main(void)
{
	char str[80];
	char res_str[80];
	char *star = (char*)"**********";
	int len;

	printf("enter the word: ");
	scanf("%s", str);

	len = strlen(str);

	if (len <= 5)
	{
		strcpy(res_str, str);

	}
	else
	{
		strncpy(res_str, str, 5);
		res_str[5] = '\0';
		strncat(res_str, star, len - 5);
	}
	
	printf("entered word: %s, omitted word: %s\n", str, res_str);

	return 0;
}