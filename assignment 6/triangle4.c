#include<stdio.h>
void main()
{
	int s1,s2,s3;
	printf("Enter values");
	scanf("%d%d%d",&s1,&s2,&s3);
   int x=checkTriangle(s1,s2,s3);
   if(x==1)
    printf("Equilateral triangle");
    else if(x==2) 
     printf("isoceles triangle");
    else
	 printf("Scalene traingle"); 
	
}
int checkTriangle(int a,int b,int c)
{
	if(a==b && b==c)
	 return 1;
	else if(a==b && b==c || a==c)
	  return 2;
	else 
	 return 3; 
}
