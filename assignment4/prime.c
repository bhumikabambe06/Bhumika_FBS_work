#include<stdio.h>
void main()
{
	int i,j,start=1,end=100;
	int flag;
	for(i=start;i<=end;i++)
	{
		flag=0;
		if(i>1)
		{
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			printf("%d \n",i);
			
		}
	}
}
