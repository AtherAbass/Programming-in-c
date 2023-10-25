//Swapping of two numbers using functions.
#include<stdio.h>

void swap(int, int);
int main()
{
	int a, b;
	printf("Enter two numbers ");
	scanf("%d%d", &a, &b);
	
	swap(a, b);
	return 0;
}

void swap(int x, int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("The numbers after swapping are : %d %d",x, y);
}