//c program to find largest number among three number.
//nested if else condition
#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the number:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("A is grater");			
	}
	else if(b>a && b>c)
	{
		printf("B is grater");	
	}
	else if(c>a && c>b)
	{
		printf("C is grater");
	}
}
