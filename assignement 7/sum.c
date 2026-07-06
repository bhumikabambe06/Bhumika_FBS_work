#include<stdio.h>
void main()
{
	int start,end;
	printf("enter start and end");
	scanf("%d%d",&start,&end);
	printSum(&start,&end);
	
}
void printSum(int* start,int* end)
{
	int i;
	int sum=0;
	for(i=*start;i<=*end;i++)
	{
		sum=sum+i;
	}
	printf("Sum:%d",sum);
}
