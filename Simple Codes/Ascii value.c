//program in c to check ascii value of a character

#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);
	printf("ascii value of %c = %d", c, c);
	
	//%d is the integer value of a character
	//%c is the actual character
	return 0;
}