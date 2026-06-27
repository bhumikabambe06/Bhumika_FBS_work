#include<stdio.h>
void main()
{
	int row,col;
	for(row=1;row<=4;row++)
	{
		for(col=1;col<=4;col++)
		{
		 if(row==1 || row==4  || col==1 || col==4)
		 {
		 	printf("*");
		 }
		 else
		 {
		 	printf("");
		 }
			
		}
		printf("\n");
	}
}
