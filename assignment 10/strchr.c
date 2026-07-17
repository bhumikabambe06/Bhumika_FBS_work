#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	char ch;
	char *p;
	printf("Enter String");
	scanf("%s",str);
	printf("Enter Character");
	scanf(" %c",&ch);
	p=strchr(str,ch);
	if(p!=NULL)
	{
		printf("Character found");
		printf("Address=%u\n",p);
		
	}
}
