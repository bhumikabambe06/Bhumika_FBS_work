#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="computer";
	char str2[]="company";
	int result=strncmp(str1,str2,4);
	printf("%d",result);
}
