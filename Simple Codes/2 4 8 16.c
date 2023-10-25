//Program in c to display the series: 2 4 8 16 32 .......(n times)

#include<stdio.h>
int main()
{
	int i, j, n, p;
	j=1;
	i=1;
	printf("Enter number of terms: ");
	scanf("%d", &n);
	while(j<=n)
	{
	p=pow(2,i);
	printf("%d ",p);
	i++;
	j++;
    }
}