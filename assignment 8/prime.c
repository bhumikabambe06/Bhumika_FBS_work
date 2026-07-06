#include<stdio.h>
void main()
{
	int a[10],n,i,j,flag;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<=1)
		continue;
		flag=1;
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			printf("%d",a[i]);
		}
	}
}
