#include<stdio.h>
void main()
{
	int a[100],b[100],c[200];
	int n,i;
	printf("Enter size of array");
	scanf("%d",&n);
	printf("enter first array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter second array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		c[n+i]=b[i];
	}
	printf("Merged array");
	for(i=0;i<2*n;i++)
	{
		printf("%d",c[i]);
	}
}
