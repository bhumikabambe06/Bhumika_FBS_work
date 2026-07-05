#include<stdio.h>
void main()
{
	int n=121;
	int x=checkPallindrome(n);
	if(x==1)
	 printf("Number is pallindrome");
	else
	  printf("Number is not pallindrome");
	
}
int checkPallindrome(int num)
{
	int temp=num;
	int rem;
	int rev=0;
	
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(temp==rev)
	 return 1;
	else
	 return 0; 
}
