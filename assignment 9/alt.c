#include<stdio.h>
void alternate(int* , int);
void main()
{
   int arr[5];
   int i;
   printf("Enter array elements");
   for(i=0;i<5;i++)
   {
   	scanf("%d",&arr[i]);
   }
  alternate(arr,5);
}
void alternate(int* arr,int size)
{
	int i;
	printf("Alternate elements:");
	for(i=0;i<size;i=i+2)
	{
		printf("%d ",arr[i]);
	}
}
