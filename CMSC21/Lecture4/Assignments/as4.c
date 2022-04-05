#include<stdio.h> 

int main(void)
{       
    int base = 2;
    int exponent, result = 1;

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int i = 1;

    while(i <= exponent)
    {
        result *= base;
        i++;
    }

    printf("%d^%d = %d", base, exponent, result);

    return 0; // return 0 to operating system
}