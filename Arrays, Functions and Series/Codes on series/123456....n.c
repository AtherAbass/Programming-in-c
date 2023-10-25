//Display series 1 2 3 4 5 .........n.
#include<stdio.h>
int main()
{
	int i, n;
	printf("Enter the number of terms : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		printf("%d ", i);
	}
}