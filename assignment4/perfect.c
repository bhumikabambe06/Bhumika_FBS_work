#include<stdio.h>
void main()
{
	int i,j,start=1,end=500,sum;
	for(i=1;i<=end;i++)
	{
		sum=0;
       for(j=1;j<i;j++)
       {
       	if(i%j==0)
       	{
       		sum=sum+j;
		   }
	   }
	   if(sum==i)
	   {
	   	printf("%d ",i);
	   }
}
	
}
