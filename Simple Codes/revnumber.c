//Program for reversing a number
#include<stdio.h>
int main()
{
	int number,revnumber,remainder;
	revnumber=0;
	printf("Enter the number to reverse:");
	scanf("%d", &number);
	while(number !=0)
	{
	remainder=number%10;
	revnumber=revnumber*10+remainder;
	number/=10;	
	}
	printf("Reversed number: %d", revnumber);
}