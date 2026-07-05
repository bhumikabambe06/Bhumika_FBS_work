#include<stdio.h>
void printSum(int,int);
void main()
{
	int start,end;
	printf("Enter start");
	scanf("%d",&start);
	printf("Enter End");
	scanf("%d",&end);
	printSum(start,end);
	
}
void printSum(int s,int e)
{
	int i;
	int sum=0;
	for(i=s;i<=e;i++)
	{
	   sum=sum+i;	
	}
	printf("Sum %d :",sum);
}
