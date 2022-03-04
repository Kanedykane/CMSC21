#include <stdio.h>

int main(void)
{
    // initialize variables of numerator and denominator
    int num1, denom1, num2, denom2, result_num, result_denom;
    
    // take user input of first fraction
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);
    
    // take user input of second fraction
    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);
    
    // find numerator
    result_num = num1 * denom2 + num2 * denom1;
    // find denominator
    result_denom = denom1 * denom2;
    // display the sum of two given fractions
    printf("The sum is %d/%d\n", result_num, result_denom);
    
    return 0;
}