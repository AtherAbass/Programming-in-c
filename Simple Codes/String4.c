//String library function.
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int count, i;
	printf("Enter your name ");
	scanf("%s", &a);
	printf("The length of string is %d"),strlen(a);
}