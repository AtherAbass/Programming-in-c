// use of switch
#include<stdio.h>
int main()
{
	int sw;
	printf("enter 1 for english, 2 for arabic, 3 for punjabi ");
	scanf("%d", &sw);
	switch(sw)
	{
		case 1:
			printf("HELLO");
			break;
		
		case 2:
			printf("SALAM");
			break;
			
		case 3:
			printf("SASRIYAKAL");
			break;
			
		default:
		printf("INCORRECT OPTION");
		
		return 0;
	
	}
}