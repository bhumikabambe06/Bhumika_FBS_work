#include<stdio.h>
void main()
{
	int arr[5];
	int i;
	int temp;
	printf("Array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<5/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[5-1-i];
		arr[5-1-i]=temp;
	}
	printf("Reverse array:");
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	
}
