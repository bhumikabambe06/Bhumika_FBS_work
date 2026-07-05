#include<stdio.h>
void ispallindrome();
void main()
{
  ispallindrome();
}
void ispallindrome()
{
	int num;
	int rem;
	int rev=0;
	printf("Enter a number");
	scanf("%d",&num);
	int temp=num;
    while(temp!=0)
	{
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	if(rev==num)
	  printf("Number is Pallindrome");
	else
	  printf("Number is not pallindrome");  
}
