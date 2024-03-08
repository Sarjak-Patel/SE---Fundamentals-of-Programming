//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3).
#include<stdio.h>
main()
{
	int num,square,cube;
    printf("Enter an integer: ");
    scanf("%d", &num);

    square = num * num;
    cube = num * num * num;

    printf("First power (N^1): %d\n", num);
    printf("Second power (N^2): %d\n", square);
    printf("Third power (N^3): %d\n", cube);
}
