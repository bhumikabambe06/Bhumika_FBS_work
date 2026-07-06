#include<stdio.h>
void main()
{
	int n;
	printf("Enter number");
	scanf("%d",&n);
	printTable(&n);
	
}
void printTable(int* num)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d",(*num)*i);
	}
}
