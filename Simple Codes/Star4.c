/*Program to display the given pattern:

* *
* * *
* * * *
* * * * *
*/
#include<stdio.h>
int main()
{
	int i, j, n;
	printf("Enter the value of n:");
	scanf("%d", &n);
	for(i=2; i<=n+1; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}