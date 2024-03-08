//C Program to Check Uppercase or Lowercase or Digit or Special Character.
#include<stdio.h>
main()
{
	char c;
	printf("enter value:");
	scanf("%c",&c);
	
	if(c>='a' && c<='z')
	{
		printf("this is lowercase.");
	}
	else if(c>='A' && c<='Z');
	{
		printf("this is uppercase.");
	}
	else if(c>='0' && c<='9');
	{
		printf("this is digit.");
	}
	else
	{
		printf("this is special characters.");
	}
}
