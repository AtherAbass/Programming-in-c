//Program in c to input an integer array from user and display the same.

#include<stdio.h>
int main()
{
	int array[100], i;
	printf("Enter the integers you want to display : ");
	for(i = 0; i <= 99; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("The integers are : ");
	for(i = 0; i <= 99; i++)
	{
		printf("%d", array[i]);
	}
	
	
}