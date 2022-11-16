#include <stdio.h>
struct cracker
{
	int price;
	int calories;
};
int main(void)
{
	struct cracker basasak;
	printf("Enter the prince and calories of basasak: ");
	scanf_s("%d%d", &basasak.price, &basasak.calories);
	printf("The price of basasak: %d¿ø\n", basasak.price);
	printf("The calories of basasak: %dkcal\n", basasak.calories);

	return 0;
}