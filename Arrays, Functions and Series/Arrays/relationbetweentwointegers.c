//Program in to to find relationship between two numbers.

#include<stdio.h>
int main()
{
	int number1, number2;
	printf("Enter any two integers : ");
	scanf("%d%d", &number1, &number2);
	
	if(number1 > number2)
	{
		printf("%d is greater than %d", number1, number2);
	}
	else if(number1 < number2)
	{
		printf("%d is less than %d", number1, number2);
	}
	else
	{
		printf("%d is equal to %d", number1, number2);
	}
		
	
}