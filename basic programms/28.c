#include<stdio.h>
main()
{
	int years, days, months;
    printf("Enter number of years: ");
    scanf("%d", &years);
   	days = years * 365;
   	months= years * 12;
    printf("%d days \n%d months", days,months);
}
