//Program to find product of first n natural numbers.
#include<stdio.h>
int main()
{
	int n, i, product;
	product = 1;
	printf("Enter value of n ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		product = product * i;
	}
	printf("%d", product);
	return 0;
}