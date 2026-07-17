#include<stdio.h>
#include<string.h>
void main()
{
	char dest[50];
	char source[50];
	printf("Enter string");
	scanf("%s",dest);
	printf("Enter string 2");
	scanf("%s",source);
	strncat(dest,source,2);
	printf("%s",dest);
}
