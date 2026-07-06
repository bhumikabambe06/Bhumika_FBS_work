#include<stdio.h>
void main()
{
	int n;
	printf("Enter number");
	scanf("%d",&n);
	isPalindrome(&n);
	
}
void isPalindrome(int* num)
{
	int temp=*num;
	int rem;
	int rev=0;
	while(*num!=0)
	{
		rem=*num%10;
		rev=rev*10+rem;
		*num=*num/10;
	}
	if(temp==rev)
	  printf("pallindrome");
	else
	 printf("not pallindrome");  
}
