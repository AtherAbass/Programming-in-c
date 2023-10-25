//program in c for swapping two numbers without using third variable.

#include<stdio.h>
int main()
{
	int x, y;
	printf("enter two integers \n");
	scanf("%d%d", &x, &y);
	printf("values of two numbers before swapping %d %d \n", x, y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("values of two numbers after swapping %d %d",x, y);
	return 0;
}