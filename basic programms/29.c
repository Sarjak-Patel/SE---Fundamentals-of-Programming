#include<stdio.h>
int main() 
{
    int minutes, hours, seconds;
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    seconds = minutes * 60;
    hours = minutes / 60;
    printf("%d hours,and %d seconds\n",hours,seconds);
}

