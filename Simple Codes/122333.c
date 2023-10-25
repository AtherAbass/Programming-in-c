//Program to display the series: 1 2 2 3 3 3 4 4 4 4..........n
#include<stdio.h>
int main()
{
	int i, j, n;
	printf("Enter value of n: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ", i);
		}
	}
}