#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define n 5
#define m 50
#define as 2   // 변수 선언(정의)

void choose(int *ran);

void choose(int *ran) 
{
	int i;
	for (i = 0; i < n; i++)
	{
		ran[i] = (rand() % m) + 1;  // 랜덤 숫자 지정
	}
}

int main(void)
{
	srand(time(NULL));
	int a[n];
	int i;
	int select = 0;  // 각종 변수와 배열 a 선언

    choose(a);

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);  // 랜덤으로 지정된 숫자 나열
	}

	printf("\nascending = 1\ndescending = 2\nChoose between 1 to 2 : ");
	scanf_s("%d", &select); // 출력과 입력

	if (select == as) // 오름차순
	{
		int i, j, Num = 0;
		for (i = 0; i < n; i++)
		{
			for (j = i; j < n; j++)
			{
				if (a[i] > a[j])
				{
					Num = a[i];
					a[i] = a[j];
					a[j] = Num;
				}
			}
		}
	}
	else // 내림차순
	{
		int i, j, Num = 0;
		for (i = 0; i < n; i++)
		{
			for (j = i; j < n; j++)
			{
				if (a[i] < a[j])
				{
					Num = a[i];
					a[i] = a[j];
					a[j] = Num;
				}
			}
		}
	}

	for (i = 0; i < n; i++) // 정리된 배열 숫자 출력
	{
		printf("%d ", a[i]);
	}
	return 0;
}

