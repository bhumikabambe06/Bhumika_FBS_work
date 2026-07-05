#include<stdio.h>
int main()
{
	int x=iseligible();
	if(x==0)
	  printf("Eligible");
	else
	  printf("Not eligible");  
}
int iseligible()
{
	int age;
	printf("Enter age");
	scanf("%d",&age);
	if(age>=18)
	 return 0;
	else
	 return 1; 
}
