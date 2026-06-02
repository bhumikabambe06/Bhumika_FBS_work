#include<stdio.h>
void main(){
	int a=10;
	int b=20;
	int temp;
	printf("Before Swapping:\n");
	printf("a:%d,b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("After Swapping:\n");
	printf("a:%d,b:%d\n",a,b);
}
