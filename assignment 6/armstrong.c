#include<stdio.h>
void main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	int x= isArmstrong(n);
	if(x==1)
	 printf("Number is armstrong");
	else
	 printf("Not armstrong"); 
	 
}
int isArmstrong(int num)
{
	int temp=num;
	int rem,sum=0;
     while(num>0)
     {
     	rem=num%10;
     	sum=sum+rem*rem*rem;
     	num=num/10;
	 }
   if(temp==sum)
    return 1;
   else return 0; 
}
