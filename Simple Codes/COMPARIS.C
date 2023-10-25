#include<stdio.h>

int main()
{
int x, y;
printf("Enter two integers to compare   ");
scanf("%d%d",&x, &y);
if (x == y)
{
printf("%d is equal to %d   ", x, y);
}
else if (x > y)
{
printf("%d is largest than %d   ",x, y);
}
return 0;
}