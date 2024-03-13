//Write a program to find out the max from given number (E.g., No: -1562
//Max number is 6)
#include<stdio.h>
main()
{
	int number = -1562,max,d;
	number=number<0? -number : number;
	while(number<0)
	{
		d=number % 10;
		if(digit>max)
		{
			max=d;
		}
		number /= 10;
	}    
	printf(" %d",max);
}
