#include<stdio.h>
void operations();
void main()
{
   operations();	
}
void operations()
{
	int a,b;
	char op;
	printf("Enter a and b");
	scanf("%d%d",&a,&b);
	printf("Enter opertor");
	scanf(" %c",&op);
	if(op=='+')
	{
		printf("Addition=%d",a+b);
	}
	else if(op=='-')
	{
		printf("Subtraction=%d",a-b);
	}
	else if(op=='/')
	{
		printf("Division =%d",a/b);
	}
	else if(op=='%')
	{
		printf("Mod = %d",a%b);
	}
}
