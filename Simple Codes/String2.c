//Program in c to input a string from user and find its length.

#include<stdio.h>
int main()
{
	char a[100];
	int count, i;
	count=0;
	printf("Enter your name ");
	scanf("%s", &a);
	for(i=0; a[i]!='\0'; i++)
	{
		count++;
	}
	printf("The length of string is %d", count);
}