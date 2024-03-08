#include<stdio.h>
float Insurance(float salary) 
{
    float premiumRate = 0.05;
    float premium = salary * premiumRate;
}
int main() 
{
    float salary, premium;
    printf("Enter your salary:");
    scanf("%f", &salary);
    if (salary < 0) {
        printf("Invalid salary\n");
    }
    premium=Insurance(salary);
    printf("Your insurance premium: %.2f\n", premium);
}

