//Program in c to find whether a number is positive, negative or zero.

#include<stdio.h>
int main()
{
	int number;
	printf("Enter any integer : ");
	scanf("%d", &number);
	
	if(number > 0)
	{
		printf("The entered number is positive.");
	}
   else if
   (number == 0)
	{
		printf("The entered number is zero.");
	}
	else
	{
		printf("The entered number is negative.");
	}
}