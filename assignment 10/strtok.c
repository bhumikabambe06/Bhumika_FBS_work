#include<stdio.h>
#include<string.h>
void main()
{
	char str[] = "C-C++-Java-Python";
	char *p;
	p=strtok(str,"-");
	while(p!=NULL)
	{
		printf("%s\n",p);
		p=strtok(NULL,"-");
	}
}
