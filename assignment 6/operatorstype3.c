#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
	operations(a,b);
}
void operations(int x,int y)
{
	char ch;
	printf("Enter character");
	scanf(" %c",&ch);
	if(ch=='+')
	 printf("Addition=%d",x+y);
	else if(ch=='-')
	 printf("Subtraction=%d",x-y);
	else if(ch=='*')
	 printf("Multiplication=%d",x*y);
	else
	 printf("Invalid");   
}
