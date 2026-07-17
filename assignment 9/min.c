#include<stdio.h>
void minimum(int* , int);
void main()
{
	int arr[5];
	int i;
	printf("Enter array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	minimum(arr,5);
}
void minimum(int* arr,int size)
{
	int i;
	int min=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("Minimum element is : %d",min);
}
