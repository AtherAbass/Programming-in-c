#include<stdio.h>
#include<conio.h>


int main()
{
    int x , y, z;
    clrscr();
    printf("Please enter two integers   ");
    scanf("%d%d",&x, &y);
    z = x + y;
    printf("Addition of %d and %d is %d",x, y, z);
    getche();
    return 0;


}