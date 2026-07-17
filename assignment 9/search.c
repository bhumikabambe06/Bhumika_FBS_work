#include<stdio.h>
void main()
{
	int arr[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	searchArray(arr,5);
}
void searchArray(int* arr,int size)
{
	int i,key,flag=0;
	printf("Enter element to search");
	scanf("%d",&key);
	for(i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	 printf("%d found",key);
	else 
	printf("not found"); 
}
