#include<stdio.h>
int greatestnum();
int main()
{
	int x=greatestnum();
	if(x==1)
	  printf("A is greater");
	else if(x==2)  
	 printf("B is greater");
	else
	 printf("C is greater"); 
}
int greatestnum()
{
	int a=10;
	int b=20;
	int c=30;
	if(a>b)
	{
		if(a>c)
		return 1;
		else
		return 0;
	}
	else
	{
		if(b>c)
		return 2;
		else
		return 0;
	}
}
