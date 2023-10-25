//Check if a string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	int i, length, flag=0;
	printf("Enter any string : ");
	scanf("%s", &string);
	
	length=strlen(string);
	for(i=0; i<length; i++)
	{
		if(string[i] != string[length-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("%s is not a palindrome.", string);
	}
	else
	{
		printf("%s is a palindrome.", string);
	}
}