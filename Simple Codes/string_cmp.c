//Comparing Strings
#include<stdio.h>
int main()
{
	char string1[4] = "cat";
	char string2[4] = "xyz";
	
	if(strcmp(string1, string2) == 0)
	printf("Strings are same");
	else
	printf("Strings are different");
}