#include<stdio.h>
void main()
{
	int arr[7],i;
	printf("Enter array elements");
	for(i=0;i<7;i++)
	{
	  scanf("%d",&arr[i]);
	}
    printf("Alternate elements:\n");
    for(i=0;i<7;i=i+2)
    {
    	printf("%d",arr[i]);
	}
}
