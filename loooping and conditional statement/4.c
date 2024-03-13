//while loop table
#include<stdio.h>
main()
{
	int i,n,t;
	printf("enter the number:");
	scanf("%d %d",&n,&i);
	while(i<=10)
	{
		t=n*i;
		printf("%d*%d=%d\n",n,i,t);
		i++;
	}
}
