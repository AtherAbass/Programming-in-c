//Program in c to find length of string (without strlen function).

#include<stdio.h>
int main()
{
	char string[100];
	int i;
	printf("Enter any string : ");
	for(i = 0; string[i] != '\0'; i++)
	{
		scanf("%c", &string);
	}
	
	for(i = 0; string[i] != '\0'; i++);
	printf("The length of string is : %d", i);
}   

    