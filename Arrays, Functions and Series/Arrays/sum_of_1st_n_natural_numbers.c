 //Program in c to find sum of first 'n' natural numbers.
 
 #include<stdio.h>
 int main()
 {
 	int i, n, sum;
 	printf("Enter the value of first 'n' natural numbers you want to add : ");
 	scanf("%d", &n);
 	for(i=1; i<=n; i++)
 	{
 	sum = sum + i;	
	}
	printf("The sum of first %d natural numbers is %d." ,n, sum);
 }