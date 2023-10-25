//Display the series 2 4 16 256 65536 ......... n
#include<stdio.h>
int main()
{
	int n,i,m;
	printf("Enter the number of terms : ");
	scanf("%d", &n);
	
	for(i = 2; i <= n; i++)
	{
		m = i * i;
	printf("%d ", m);
    }
}