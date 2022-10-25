#include<stdio.h>
#include<string.h>

int main()
{
	char str[20] = {};
	char password[20] = "hello";


	printf("Enter the password \n");


	do{
		printf("Password:" );
		scanf_s("%s", str, 20);

		if (strcmp(password, str) == 0)
		{
			printf("normal termination.. \n\n");
			break;
		}
		else
		{ 
			printf("not matches, retey..\n\n");
		}
		
		}while (1);
	return 0;
}