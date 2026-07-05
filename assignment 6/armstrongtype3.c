#include<stdio.h>
void main()
{
	int no;
	printf("Enter a number");
	scanf("%d",&no);
	CheckNumber(no);
}
void CheckNumber(int num)
{
	int temp=num;
	int rem;
	int sum=0;
	while(num>0)
	{
		rem=num%10;
	    sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(temp==sum)
	 printf("number is armstrong");
	else
	 printf("number is not armstrong"); 
}
