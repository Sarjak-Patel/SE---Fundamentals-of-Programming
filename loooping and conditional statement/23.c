#include <stdio.h>

int main() {
    int a[10];
    int i;

    printf("Enter values:\n");
    for (i = 1; i <= 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array elements:\n");
    for (i=10; i>=1; i--) {
        printf("%d\n", a[i]);
    }

}

