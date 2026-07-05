#include<stdio.h>
void printTable(int );
void main()
{
	int n;
	printf("Enter number to print table");
	scanf("%d",&n);
	printTable(n);
	
	
}
void printTable(int num)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d\n",num*i);
	}
}
