#include<stdio.h>
void main(){
	int num=121;
	int first,last;
	first=num/100;
	last=num%10;
	if(first==last){
		printf("Number is pallindrome");
	}
	else
	{
		printf("Number is not pallindrome");
	}
}
