#include<stdio.h>
void main()
{
	int no;
	printf("Enter a number");
	scanf("%d",&no);
	EvenOdd(no);
	
}
void EvenOdd(int num)
{
	if(num%2==0)
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
}
