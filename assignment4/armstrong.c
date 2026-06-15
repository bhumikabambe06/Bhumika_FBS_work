#include<stdio.h>
void main()
{
	int start=100;
	int end=1000;
	int i,num,temp,rem,sum;
	for(i=1;i<=end;i++)
	{
		num=i;
		num=temp;
		sum=0;
		while(temp!=0)
		{
			rem=temp%10;
			sum=sum+rem*rem*rem;
			temp=temp/10;
		}
	}
		if(sum==num)
		  printf("num is armstrong");
		else
		   printf("num is not armstrong");  
		  
	
	
}
