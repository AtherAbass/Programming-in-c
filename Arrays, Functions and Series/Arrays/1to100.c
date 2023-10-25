//Program in c to print integers from 1 to anthing.

#include<stdio.h>
int main()
{
	int i, j;
	printf("Enter the number upto which you want to print : ");
	scanf("%d", &j);
	
	for(i=1; i<=j; i++)
	{
		printf("%d ", i);
	}
}