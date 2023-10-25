//Program for bubble sorting an array.
#include<stdio.h>
int main()
{
	int a[5]={44, 33,55,77,66};
	int n, i, j,temp;
	
	for (i=0; i<n-1; i++)
	{
		for (j=0; j<n-i-1; j++)
	{
			if (a[j] > a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	
    }
    printf("Array after bubble sort ");
    for(i=0; i<n; i++)
    {
    	printf("%d", a[i]);
	}
} 