//WAP to find factorial using recursion
#include<stdio.h>
 int fac(int f)
 {
 	//basw condition to terminate the recusion when N=0
 	if(f==0)
 	{
 		return 0;
	}
	int res =f*(f-1)*(f-2)*(f-3);
	return res;
 }
 int main()
 {
 	int f;
 	printf("enter the value:");
 	scanf("%d",&f);
 	int factorial = fac(f);
 	printf("Factorial number: %d",factorial);
 }
