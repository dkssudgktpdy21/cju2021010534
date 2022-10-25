#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define n 5
#define m 50
#define as 2

void choose(int *ran);

void choose(int *ran)
{
	int i;
	for (i = 0; i < n; i++)
	{
		ran[i] = (rand() % m) + 1;
	}
}

int main(void)
{
	srand(time(NULL));
	int a[n];
	int i;
	int select = 0;

    choose(a);

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\nascending = 1\ndescending = 2\nChoose between 1 to 2 : ");
	scanf_s("%d", &select);

	if (select == as)
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
	else
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

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}

