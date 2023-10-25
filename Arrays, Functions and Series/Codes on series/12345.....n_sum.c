//Sum of 1st n natural numbers.
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number of terms : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	printf("Sum of given series is equal to %d", sum);
}