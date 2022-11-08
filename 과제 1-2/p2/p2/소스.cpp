#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	srand(time(NULL));

	int num = rand() % 99 + 1;       // 랜덤 숫자 정하기
    int answer = 0;
	int chance = rand() % 7 + 3;    // 랜덤 기회 정하기

	while (chance > 0) // 기회가 존재하는 동안
	{
		printf("%d chances left\n", chance--);
		printf("choose a number(1~99): ");
		scanf_s("%d", &answer);

		if (answer > num)      // 각 상황에 대한 선택문
		{
			printf("DOWN\n");
		}

		else if (answer < num)
		{
			printf("UP\n");
		}

		else if (answer == num)  
		{
			printf("It's the answer!\n\n");
			break;
		}

		else
		{
		printf("Error Occurred\n\n");
		}

		if (chance == 0)  // 기회가 끝났을 때
		{
			printf("There is no chance left. do you want to do again?\n\n\n");
			
			continue;
		}

	}
	return 0;
}
