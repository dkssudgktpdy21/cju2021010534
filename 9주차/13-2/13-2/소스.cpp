#include <stdio.h>
#pragma warning(disable:4996)

void input_data(int* pa, int* pb);
void swap_data(void);
void print_data(int a, int b);

int a, b;

int main(void)
{
	input_data(&a, &b);
	swap_data();
	print_data(a, b);

	return 0;
}

void input_data(int* ap, int* bp)
{
	printf("input two integer: ");
	scanf("%d %d", ap, bp);
}
void swap_data(void)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
void print_data(int a, int b)
{
	printf("output two integer: %d %d", a, b);
}