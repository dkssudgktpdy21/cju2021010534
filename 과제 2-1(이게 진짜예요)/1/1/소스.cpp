#include<stdio.h>
#include<string.h>

int main()
{
	char str[20] = {};
	char password[20] = "hello";  // 변수 지정


	printf("Enter the password \n");  // 출력


	do{
		printf("Password:" );
		scanf_s("%s", str, 20);  

		if (strcmp(password, str) == 0)  // 두 변수가 일치
		{
			printf("normal termination.. \n\n");
			break;
		}
		else
		{ 
			printf("not matches, retey..\n\n");
		}
		
		}while (1); // 반복
	return 0;
}