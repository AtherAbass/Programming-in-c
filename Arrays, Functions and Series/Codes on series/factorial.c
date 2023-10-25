//Factorial of a number n.
#include<stdio.h>
int main()
{
	int n,i,factorial=1;
	printf("Enter any positive integer : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
	factorial = factorial * i;	
	}
	printf("The factorial of given positive integer is %d", factorial);
}