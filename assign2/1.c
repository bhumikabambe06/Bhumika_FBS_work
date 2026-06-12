#include<stdio.h>

void main()
{
    int a,b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c",&op);
    if(op=='+')
	{
		printf("Addition %d ",a+b);
	}
	else if(op=='-')
	{
		printf("Subtraction %d:",a-b);
	}
	else if(op=='*')
	{
		printf("Multiplication %d ",a*b);
	}
	else if(op=='/')
	{
		printf("Division%d",a/b);
	}
	else if(op=='%')
	{
		printf("Mod %d ",a%b);
	}
	else
	{
		printf("Invalid Output");
	}
}
