#include<stdio.h>
main()
{
	int n1,n2;
	printf("Enter first number:");
	scanf("%d %d",&n1,&n2);
	 
	 n1=n1+n2;
	 n2=n1-n2;
	 n1=n1-n2;
	 printf("the swap numbers are: %d %d",n1,n2);
}
