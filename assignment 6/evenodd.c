#include<stdio.h>
void main()
{
	evenodd();
}
void evenodd()
{
	int num;
	printf("Enter number");
	scanf("%d",&num);
	if(num%2==0)
	  printf("Even number");
	else
	  printf("Odd number");  
}
