//Program in c to find the length of string entered by user.

#include<stdio.h>
int main()
{
	int size,i;
	char array[100];
	size=0;
	printf("Enter your name : ");
	scanf("%s", &array);
	
	for(i=0; array[i]!='\0'; i++)
	{
		size++;
	}
	printf("The length of your name is %d", size);
}