#include<stdio.h>
void main()
{
	int n=121;
	int temp,rem;
	int rev=0;
	temp=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		
	}
	if(temp==rev)
	{
		printf("Pallindrome");
	}
	else
	{
		printf("Not Pallindrome");
	}
}
