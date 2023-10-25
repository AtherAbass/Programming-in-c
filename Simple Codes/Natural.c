//Program to display first n natural numbers.

#include<stdio.h>
int main()
{
	int n, i;
	printf("Enter value of n ");
	scanf("%d ", &n);
	
	for(i=1; i<=n; i++);
	{
		printf("%d ", i);
	}
	
	return 0;
}