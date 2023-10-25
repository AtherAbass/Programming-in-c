//Display the series 2 4 8 16 32........n.
#include<stdio.h>
int main()
{
	int n,i,j,p;
	j=1;
	i=1;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	while(j <= n)
	{
		p = pow(2, i);
		printf("%d ", p);
		i++;
		j++;
	}
	
}