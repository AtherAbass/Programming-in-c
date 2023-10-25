//Display the series 12345 12345 12345 12345 12345 12345.
#include<stdio.h>
int main()
{
	int i, j,n;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= 5; j++)
		printf("%d", j);
	}
}