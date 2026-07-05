#include<stdio.h>
int isPrime(int);
void main()
{
	int n;
	printf("Enter number");
	scanf("%d",&n);
	int x=isPrime(n);
	if(x==2)
	 printf("prime");
	else 
	 printf("not prime"); 
	
}
int isPrime(int num)
{
	int i=2;
	int flag=0;
	while(i<num)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
	 return 2;
	else 
	return 3; 
}
