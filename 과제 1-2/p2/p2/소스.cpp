#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	srand(time(NULL));

	int num = rand() % 99 + 1;       // ���� ���� ���ϱ�
    int answer = 0;
	int chance = rand() % 10 + 1;    // ���� ��ȸ ���ϱ�

	while (chance > 0) // ��ȸ�� �����ϴ� ����
	{
		printf("%d chances left\n", chance--);
		printf("choose a number(1~99): ");
		scanf_s("%d", &answer);

		if (answer > num)      // �� ��Ȳ�� ���� ���ù�
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

		if (chance == 0)  // ��ȸ�� ������ ��
		{
			printf("There is no chance left. do you want to do again?\n\n\n");
			
			continue;
		}

	}
	return 0;
}