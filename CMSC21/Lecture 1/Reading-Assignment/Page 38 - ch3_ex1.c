// C preprocessor directive
#include <stdio.h>

int main(void)
{
    int i, j;
    float x, y;
    
    i=10;
    j=20;
    x=43.2892f;
    y=5527.0f;
    
    // %d write an integer in base 10 format
    // %f write a floating point value
    printf("i=%d, j=%d, x=%f, y=%f\n", i, j, x, y);    
    return 0;
}