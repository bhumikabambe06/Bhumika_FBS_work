#include<stdio.h>
void main()
{
	int a[10],n,i;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array in reverse order");
	for(i=n-1;i>=0;i--)
	{
		printf(" %d ",a[i]);
	}
}
