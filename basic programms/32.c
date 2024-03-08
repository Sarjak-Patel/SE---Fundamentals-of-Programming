//Accept 2 numbers and find out its sum check it size.
#include<stdio.h>
main()
{
	int n1,n2,sum; //token
	printf("enter the numbers: \n");
	scanf("%d %d",&n1,&n2);
	sum=n1+n2;
	printf("total is: %d",n1); 
    if (sum >= -32768 && sum <= 32767) 
	{
        printf("Size of sum is: 2 bytes (short int)\n");
    } 
	else if (sum >= -2147483648 && sum <= 2147483647) 
	{
        printf("Size of sum is: 4 bytes (int)\n");
    } 
	else {
        printf("Size of sum is: 8 bytes (long int)\n");
    }
	
}

