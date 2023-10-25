//Program in c to find the factorial of a number.
#include<stdio.h>
int main()
{
	int n, factorial = 1;
	printf("Enter the number : ");
	scanf("%d", &n);
	while(n)
	{
		factorial = factorial * n;
		n--;
	}
	printf("factorial:%d", factorial);
}