//program in c to check whether an integer is odd or even

#include<stdio.h>
int main()
{
	int x;
	printf("enter any integer ");
	scanf("%d", &x);
	
	if (x % 2 == 0)
	{
		printf("The entered number is even.");
	}
	else
	{
		printf("The entered number is odd.");
	}
	
	return 0;
}
