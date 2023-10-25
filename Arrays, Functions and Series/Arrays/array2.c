//Program in c to input a string rom user and display the same.

#include<stdio.h>
int main()
{
	int array[100], i;
	printf("Enter your name : ");
	scanf("%s", &array);
	for(i=0; array[i] != '\0'; i++)
	{
		printf("%c", array[i]);
	}
}