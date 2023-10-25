//Sum of 1 3 5 7 9 ....... n.
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number of terms : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i = i+2)
	{
    sum = sum + i;
    }
    printf("The sum of given series is %d", sum);
}