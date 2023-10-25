//Program in c to input a string from the user and display it in reverse order.

#include<stdio.h>
int main()
{
	char a[100];
	int count, i;
	printf("Enter your string ");
	scanf("%s", &a);
	for(i=0; a[i]!='\0'; i++)
	{
		count++;
	}
	for(i=count-1; i>=0; i--)
	{
		printf("%c", a[i]);
	}
}