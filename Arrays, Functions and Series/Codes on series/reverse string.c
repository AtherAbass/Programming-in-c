//Program in c to input string from user and display it in reverse order.

#include<stdio.h>
int main()
{
	char string[100];
	int i,count;
	printf("Enter any string : ");
	scanf("%s", &string);
	
	for(i = 0; string[i] != '\0'; i++)
	{
		count++;
	}
	for(i = count-1; i >= 0; i--)
	{
		printf("%c", string[i]);
	}		
}