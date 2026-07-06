#include<stdio.h>
void main()
{
	int n;
	printf("Enter number");
	scanf("%d",&n);
	printNumber(&n);
	
}
void printNumber(int* num)
{
	int i=1;
	for(i=1;i<=*num;i++)
	{
		printf("%d",i);
	}
}
