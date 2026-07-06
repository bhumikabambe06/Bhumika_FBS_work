#include<stdio.h>
void main()
{
	int arr[5],i;
	printf("Enter array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("even numbers are:\n");
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d",arr[i]);
		}
	}
	printf("odd numbers are:\n");
	for(i=0;i<5;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%d",arr[i]);
		}
	}
    
}
