#include<stdio.h>
void main()
{
	int a[5];
	int b[5];
	int c[5];
	int i;
	printf("enter 1st array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter 2nd array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("Sum:");
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
		printf("%d ",c[i]);
	}
}
