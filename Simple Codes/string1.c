//Program in c to input a string from the user and display it.
#include<stdio.h>
int main ()
{
	char a[100];
	printf("Enter your name ");
	scanf("%s", &a);
	int i;
	for(i=0; a[i]!='\0'; i++)
	{
		printf("%c", a[i]);
	}
}