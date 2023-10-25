//Searching for element in an array.

#include<stdio.h>
int main()
{
	int a[100], n,element,i;
	printf("Enter the size of an array ");
	scanf("%d", &n);
	printf("Enter the elements of an array ");
	for(i=0; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the element you want to search ");
	scanf("%d", &element);
	
	for(i=0; i<n; i++)
	{
		if (a[i]==element)
		{
			printf("Element found.");
		}
	}
	printf("Element not found.");
}