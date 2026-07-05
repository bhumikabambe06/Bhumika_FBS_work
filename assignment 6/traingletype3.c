#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three sides");
	scanf("%d%d%d",&a,&b,&c);
	triangle(a,b,c);
	
}
void triangle(int x,int y,int z)
{
	if(x==y && y==z)
	 printf("Equilateral triangle");
	else if(x==y || x==z)
	  printf("Scalene traingle");
	else
	 printf("Isoceles triangle");   
}
