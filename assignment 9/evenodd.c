#include<stdio.h>
void even(int* , int);
void main()
{
	int arr[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
    even(arr,5);
}
void even(int* arr,int size)
{
	int i;
	printf("Even number:");
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d",arr[i]);
		}
	}
}
