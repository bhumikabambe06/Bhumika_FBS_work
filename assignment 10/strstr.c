#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50],str2[50];
	char *p;
	printf("Enter string");
	scanf("%s",str1);
	printf("Enter sub string");
	scanf("%s",str2);
	p=strstr(str1,str2);
	if(p!=NULL)
	{
		printf("Substring found");
		printf("Substring = %s",p);
	}
	else
	{
		printf("Substring not found");
	}
	
}
