#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <math.h> 

#define MAX	100
#define N 5      // ���� ����(����)

double average(int *pa);
double variance(int *pa);
double standard_deviation(int *pa);
void random(int *pa);                   // �� �Լ� ����


void random(int *pa)
{
	int i;
	
	for (i = 0; i < N; i++)
	{
		pa[i] = (rand() % MAX) + 1;   // MAX �� ���� ���� �����ǰԲ�
	}
}

double average(int *pa) // ���
{
	int N1 = 0, N2 = 0, N3 = 0, N4 = 0, N5 = 0;
	int avg = 0;

	N1 = pa[0];
	N2 = pa[1];
	N3 = pa[2];
	N4 = pa[3];
	N5 = pa[4];                                      // ���� ���� ����

	avg = (N1 + N2 + N3 + N4 + N5) / N;
		return avg;
}

double variance(int *pa) // �л�
{
	double N1 = 0, N2 = 0, N3 = 0, N4 = 0, N5 = 0;
	double var = 0, avg = 0;

	N1 = pa[0];
	N2 = pa[1];
	N3 = pa[2];
	N4 = pa[3];
	N5 = pa[4];

	avg = (N1 + N2 + N3 + N4 + N5) / N;
	var = ((N1 - avg) * (N1 - avg) + (N2 - avg) * (N2 - avg) + (N3 - avg) * (N3 - avg) + (N4 - avg) * (N4 - avg) + (N5 - avg)* (N5 - avg))/N;
	return var;
}


double standard_deviation(int *pa) // ǥ������
{
	double N1 = 0, N2 = 0, N3 = 0, N4 = 0, N5 = 0;
	double var = 0, avg = 0, sd = 0;

	N1 = pa[0];
	N2 = pa[1];
	N3 = pa[2];
	N4 = pa[3];
	N5 = pa[4];

	avg = (N1 + N2 + N3 + N4 + N5) / N;
	var = ((N1 - avg) * (N1 - avg) + (N2 - avg) * (N2 - avg) + (N3 - avg) * (N3 - avg) + (N4 - avg) * (N4 - avg) + (N5 - avg) * (N5 - avg) / N);
	sd = sqrt(var);
	return sd;
}


int main()
{
	int pa[5];

	srand(time(NULL));
	random(pa);

	double avg = average(pa);
	double var = variance(pa);
	double sd = standard_deviation(pa);   // ���� ����
	 
	printf("Average : %f\n", avg);
	printf("Variance : %f\n", var);
	printf("standard_deviation: %f\n", sd);  // ���

	return 0;
}