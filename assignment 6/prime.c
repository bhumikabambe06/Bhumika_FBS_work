#include<stdio.h>
void isPrime(int );
void main()
{
	int n;
	printf("Enter number");
	scanf("%d",&n);
	isPrime(n);
}
void isPrime(int num)
{
	int i;
	int flag=0;
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		 flag=1;
		 break; 
	}
	if(flag==0)
	 printf("Number is prime");
	else
	 printf("Number is not prime"); 
}

