//Addition of two numbers using functions.

#include<stdio.h>

int sum(int, int);
int main()
{
	int a, b;
	
	printf("Enter two numbers ");
	scanf("%d%d", &a, &b);
	
	printf("%d + %d = %d", a, b, sum(a, b));
	return 0;
}
int sum (int x, int y)
{
	return (x+y);
}