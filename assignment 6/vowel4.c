#include<stdio.h>
int checkChar(char ch);
void main()
{
	char c;
	printf("Enter character");
	scanf(" %c",&c);
   int x=checkChar(c);
   if(x==1)
    printf("Vowel");
   else
    printf("Consonant"); 
	
}
int checkChar(char ch)
{
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='e')
	 return 1;
	else
	 return 0; 
}
