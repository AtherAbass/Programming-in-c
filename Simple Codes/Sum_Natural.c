//Program to find sum of first n natural numbers.
#include<stdio.h>
int main()
{
	int n, i, sum;
	sum=0;
	printf("Enter value of n ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		sum = sum + i;
	}
	printf("%d",sum);
	return 0;
}