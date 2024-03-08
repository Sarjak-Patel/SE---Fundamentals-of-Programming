#include <stdio.h>
int main() 
{
    int days,months;
    printf("Enter number of days:");
    scanf("%d",&days);
    months=days/30;
    printf("Approximately %d months\n", months);
}
