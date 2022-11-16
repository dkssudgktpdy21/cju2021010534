#include <stdio.h>

struct marriage
{
	char name[15];
	int age;
	char sex;
	double height;
};

struct marriage m1 = { "¼¼Áø", 21, 'f', 172.1};
struct marriage* mp = &m1;

printf("name: %s", mp->name);
printf("age: %d", mp->age);
printf("sex: %c", mp->sex);
printf("height: %.1lf", mp->height);