#include<stdio.h>
void traingle();
void main()
{
	traingle();
}
void traingle()
{
	int a,b,c;
	printf("Enter values:");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c)
	  printf("Equilateral traingle");
	else if(a==b || b==c || a==c)
	  printf("Isoceles traingle");
	else
	  printf("Scalene traingle");  
 }
