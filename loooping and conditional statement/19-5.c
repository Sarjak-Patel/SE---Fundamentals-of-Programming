#include<stdio.h>
main()
{
	int raw=5;
	int n=1;
	int i,j;
	for(i=1;i<=raw;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",n++);
		}
		printf("\n");
	}
}
