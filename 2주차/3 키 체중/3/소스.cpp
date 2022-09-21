#include <stdio.h>
int main(void)
{
	int weight;
	double height;


	printf("weight(kg) height(cm) input : ");
	scanf_s("%d %lf", &weight, &height);

	double bmi;

	height = height / 100.0;
	bmi = weight / (height * height);

	((bmi >= 20.0) && (bmi < 25.0))
		? printf("It's the standard.\n")
		: printf("You need to take care of your weight.\n");

	return 0;

}