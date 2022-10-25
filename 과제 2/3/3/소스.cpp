#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define n 9
#define m 4
#define p 3

int main(void)
{
	srand(time(NULL));
	int a[p][m]{};
	int i, j;

	for (i = 0; i < p; i++)
	{
		for (j = 0; j < m; j++)
		{a[i][j] = (rand() % n) + 1;
		printf("%4d", a[i][j]);
	}
	   printf("\n\n");
	}

	int b[m][p];
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < p; j++)
		{
			b[i][j] = (rand() % n) + 1;
			printf("%4d", b[i][j]);
		}
		printf("\n\n");
	}

	int c[p][p];
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < p; j++)
		{
			c[i][j] = (a[i][0] * b[0][j] + a[i][1] * b[1][j]);
			printf("%4d", c[i][j]);
		}	
		printf("\n");
		}

	return 0;
	}

