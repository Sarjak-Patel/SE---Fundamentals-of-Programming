//1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
main()
{
	int n,i,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++);
	{
		sum += i;
	}
	printf("the sum:%d",sum);
}
