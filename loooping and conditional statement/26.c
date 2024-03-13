//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include <stdio.h>
int main() {
    int i,j,n,sum = 0;
    int t_sum = 0;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++) 
	{
        for (j=1;j<=i;j++) 
		{
            t_sum += j;
        }
        sum += t_sum;
    }
    printf("The sum: %d",sum);
}

