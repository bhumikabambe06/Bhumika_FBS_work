#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50];
	char str2[50];
	printf("enter string");
	scanf("%s",str1);
	strncpy(str2,str1,4);
	printf("Str2:%s",str2);
}
