//Program in c to display array elements in reverse order.

#include<stdio.h>
int main()
{
	int i;
	int array[]={1,2,3,4,5};
	for(i = 4; i >= 0; i--)
	{
		printf("%d ", array[i]);
	}
	
}