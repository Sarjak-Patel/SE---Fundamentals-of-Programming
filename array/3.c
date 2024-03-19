//WAP to find reverse of string using recursion.
#include<stdio.h>
#include<string.h>
 int rev(char c)
 {
 	//basw condition to terminate the recusion when N=0
 	if(c==0)
 	{
 		return 0;
	}
 }
 int main()
 {
 	char c[10];
	printf("enter string:");
	scanf("%s",&c);
	printf("%s",strrev(c));
 }
