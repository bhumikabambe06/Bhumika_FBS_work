#include<stdio.h>
void greatestnum();
void main()
{
	greatestnum();
}
void greatestnum()
{
	int a=50;
	int b=60;
	int c=70;
	if(a>b)
	{
		if(a>c)
		printf("a is greater");
		 else 
		printf("c is greater"); 
	}
	else
	{
		if(b>c)
		  printf("b is greater");
		else
		  printf("c is greater");  
	}
}

