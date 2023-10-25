//Program in c to find if an integer is odd or even.

#include<stdio.h>
int main()
{
	int number;
	printf("Enter any integer : ");
	scanf("%d", &number);
	
	if(number % 2 == 0)
	{
		printf("The entered integer is even.");
	}
	else
	{
		printf("The entered number is odd.");
	}
}