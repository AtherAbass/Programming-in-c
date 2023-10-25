//Program in c to take 5 values from user and store them in an array.

#include<stdio.h>
int main()
{
	int values[5], i;
	
	printf("Enter the five values you want to display : ");
	for(i=0; i<=4; i++)
	{
	scanf("%d", &values[i]);	
	}
	
	for(i=0; i<=4; i++)
	{
		printf("%d ", values[i]);
	}
	
}