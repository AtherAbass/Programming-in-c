/*Program in c to display following pattern
		 (n times) */
        
#include<stdio.h>
int main()
{
	int n,i,j, k;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
	for(j=i; j<=n; j++)
	{
	printf(" ");
    }
	
	for(k=1; k<=n; k++)
	{
		printf("* ");
	}
	printf("\n");
    }

}