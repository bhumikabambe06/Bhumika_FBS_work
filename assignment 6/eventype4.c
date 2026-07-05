#include<stdio.h>
void main()
{
	int num;
	printf("Enter number");
	scanf("%d",&num);
	int x=checkNum(num);
	if(x==1)
	 printf("number is even");
	else
	 printf("number is odd"); 
	
}
int checkNum(int no)
{
	if(no%2==0)
	 return 1;
	else
	 return 0; 
}
