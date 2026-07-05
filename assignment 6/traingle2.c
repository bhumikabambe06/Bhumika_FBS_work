#include<stdio.h>
int traingle();
int main()
{
    int x=traingle();
	if(x==1)
	 printf("Equilateral traingle");
	else if(x==2)
	 printf("Isoceles traingle");
	 else
	 printf("Scalene triangle"); 	
}
int traingle()
{
	int a,b,c;
	printf("Enter Values");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c )
	  return 1;
	else if(a==b || b==c || a==c)
	  return 2;
	else 
	  return 0;  
}
