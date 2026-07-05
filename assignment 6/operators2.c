#include<stdio.h>
int main()
{
	   int x=operations();
	   printf("Result:%d",x);
	   
}
int operations()
{
	int a,b;
	char c;
	int result;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	printf("Enter operator");
	scanf(" %c",&c);
	if(c=='+')
	  result=a+b;
	else if(c=='-')
	  result=a-b;
	else if(c=='*')
	  result=a*b;
	else if(c=='/')
	  result=a/b;
	else if(c=='%')
	  result=a%b;
	else
	  printf("invalid operator");
	return result;            
	
}
