//Product of 1st n natural numbers.
#include<stdio.h>
int main()
{
	int n,i,product=1;
	printf("Enter the number of terms : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		product = product * i;
	}
	printf("Product of first n natural numbers is %d", product);
}