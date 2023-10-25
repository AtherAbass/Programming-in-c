//Program in c to sort an integer array in ascending order.
#include <stdio.h>
int main()
{
	int a[7] = {4, 2, 9, 6, 1, 12, 8};
	int i, j, temp;
	for(i=0; i<=5; i++)
	{
		for(j=0; j<=5; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
        for(i=0; i<7; i++)
        {
        printf("%d ", a[i]);
	    }
}