//1 2 3 6 9 18 27 54...
#include<stdio.h>
main()
{
	int n,i;
	printf("enter the number:");
	scanf("%d ",&n);
	for(i=1;i<=n;i++)
	{
			n=n*3;
			printf(" %d",n);
	}	
}
