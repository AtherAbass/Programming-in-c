//Program in c to display contents of a string.

#include<stdio.h>
int main()
{
	int i;
	char string[50];
	printf("Enter your name : ");
	scanf("%s", &string);
	
	for(i = 0; string[i] != '\0'; i++ )
	{
		printf("%c ", string[i]);
	}
}