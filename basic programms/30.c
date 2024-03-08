#include<stdio.h>
int main() 
{
    int years, days;
    printf("Enter number of years: ");
    scanf("%d", &years);
   	days = years * 365;
    printf("%d days\n", days);
    
    printf("Enter number of days: ");
    scanf("%d", &days);
    years = days / 365;
    printf("%d year\n", years);
}

