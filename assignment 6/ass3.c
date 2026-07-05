#include<stdio.h>
void printNumber(int ,int );
void main()
{
	int a,b;
	printf("Enter numbers");
	scanf("%d%d",&a,&b);
	 printNumber(a,b);
	
}
void printNumber(int start,int end)
{
	int i;
	for(i=start;i<=end;i++)
	{
		printf("%d\n ",i);
	}
}
