#include<stdio.h>
void main()
{
   int a[5],b[5],c[5];
   int i;
   printf("Enter first array :");
   for(i=0;i<5;i++)
   {
   	scanf("%d",&a[i]);
   }
   printf("Enter second array :");
   for(i=0;i<5;i++)
   {
   	scanf("%d",&b[i]);
   }
   for(i=0;i<5;i++)
   {
   	c[i]=a[i]+b[i];
   }
   printf("Sum stored in third array:\n");
   for(i=0;i<5;i++)
   {
   	printf("%d",c[i]);
   }
}
