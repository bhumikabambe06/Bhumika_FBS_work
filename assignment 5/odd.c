#include<stdio.h>
void main()
{
  int n;
  int i=1;
  printf("Enter a number");
  scanf("%d",&n);
  while(n!=0)
  {
  	if(n%2!=0)
  	{
  		printf("%d",i);
	  }
  	i++;
  }
}
