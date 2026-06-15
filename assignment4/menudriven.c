#include<stdio.h>
void main()
{
	int num,choice;
	printf("Enter number");
	scanf("%d",&num);
	printf("\n 1.EvenOdd \n 2.Prime \n 3.Pallindrome \n 4.Positive/Negative/Zero \n 5.Reverse \n 6.Sum of digit" );
	printf("Enter choice");
	scanf("%d",&choice);
	if(choice==1)
	{
		if(num%2==0)
		printf("Even number");
		else
		 printf("Odd number");
	}
	else if(choice==2)
	{
		int i,flag=0;
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		  printf("Prime Number");
		else
		  printf("Not a prime");  
	}
	else if(choice==3)
	{
		int i,rem,rev=0;
		int temp=num;
		while(temp>0)
		{
			rem=temp%10;
			rev=rev*10+rem;
			temp=temp/10;
		}
		if(num==rev)
		  printf("Pallindrome number");
		else
		  printf("not a pallindrome number");  
	}
	else if(choice==4)
	{
		if(num>0)
		  printf("Positive number");
		else if(num<0)
		  printf("Negative number");
		else
		  printf("Zero");   
	}
	else if(choice==5)
	{
		int rem;
		int temp=num,rev=0;
		while(temp>0)
		{
			rem=temp%10;
			rev=rev*10+rem;
			temp=temp/10;
		}
		printf("Rev=%d",rev);
	}
	else if(choice==6)
	{
		int temp=num;
		int rem;
		int sum=0;
		while(temp>0)
		{
			rem=temp%10;
			sum=sum+rem;
			temp=temp/10;
		}
		printf("Sum=%d",sum);
	}
	else
	{
		printf("Invalid Choice");
	}
}
