#include<stdio.h>
void maximum(int* ,int );
void main()
{
	int arr[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	maximum(arr,5);
}
void maximum(int* arr,int size)
{   
    int i;
	int max=arr[0];
	for(i=0;i<size;i++)
	{
	  if(arr[i]>max)
	  {
	  	max=arr[i];
	  }	
	}
	printf("Maximu element :%d",max);
}
