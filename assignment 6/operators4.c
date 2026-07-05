#include<stdio.h>
int  Operations(int x,int y,char op);
void main()
{
   int a,b;
   char op;
   printf("Enter two numbers");
   scanf("%d %d",&a,&b);
   printf("Enter character");
   scanf(" %c",&op);
    int x=Operations(a,b,op);
    if(op=='+' ||op=='-' || op=='*' || op=='/' || op=='%')
     printf("Result=%d",x);
     	
}
int Operations(int x,int y,char op)
{
	if(op=='+')
	 return x+y;
	else if(op=='-')
	 return x-y;
	else if(op=='*')
	 return x*y;
	else if(op=='/')
	 return x/y;
	else if(op=='%')
	 return x%y;
	else
	 return 0;      
}
