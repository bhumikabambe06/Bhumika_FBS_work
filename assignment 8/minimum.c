#include<stdio.h>
void main()
{
	int arr[5],i;
	printf("Enter array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int min=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("Minimum element:%d",min);
}
