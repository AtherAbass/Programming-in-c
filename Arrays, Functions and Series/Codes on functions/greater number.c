//Program to find greater of two numbers.

#include<stdio.h>
int greater(int, int);
int main()
{
	int a, b, max;
	printf("Enter two numbers : ");
	scanf("%d%d", &a, &b);
	
	max=greater(a, b);
	printf("The greater number is %d", max);
	return 0;
}
int greater(int x, int y)
{
	int g;
	if (x>y)
	g=x;
	else
	g=y;
}