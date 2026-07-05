#include<stdio.h>
int printSum(int,int);
void main()
{
	int start=1;
	int end=10;
	int x=printSum(start,end);
	printf("Sum=%d",x);
	
}
int printSum(int s,int e)
{
	int i;
	int sum=0;
    for(i=s;i<=e;i++)
    {
    	sum+=i;
	}
	return sum;
}
