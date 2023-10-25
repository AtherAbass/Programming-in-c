/*Display the following pattern
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5  (n times)*/

#include<stdio.h>
int main()
{
	int i, j, n;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= 5; j++)
		{
		printf("%d ", j);	
	    }
	    printf("\n");
	}
	
}