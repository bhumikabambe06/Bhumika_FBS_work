#include<stdio.h>
int main()
{
   int x=ispallindrome();
   if(x==1)
    printf("number is pallindrome");
   else
   printf("number is not pallindrome");		
       
}  
int ispallindrome()
 {
 	int num;
 	int rev=0;
 	int rem,temp;
 	printf("Enter a number");
 	scanf("%d",&num);
 	temp=num;
 	while(temp!=0)
 	{
 		rem=temp%10;
 		rev=rev*10+rem;
 		temp=temp/10;
	 }
	 if(num==rev)
	  return 1;
	 else
	   return 0;
 }
