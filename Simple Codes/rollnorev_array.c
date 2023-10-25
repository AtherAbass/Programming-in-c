//Program in c to store and display roll number using array
#include<stdio.h>
int main()
{
	char a[9] = {'M', 'E', '-', '2','2', '-', '0', '5', '\0'};
	int i;
	for (i=8; i>=0; i--)
	{
		printf("%c", a[i]);
	}
}