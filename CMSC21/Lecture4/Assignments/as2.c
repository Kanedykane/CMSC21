#include <stdio.h>

int main (void)
{
    int i;
    
    i = 4;
    do{
        printf("%d ", i);
        i *= 2;
    } while (i < 10);
    
    return 0;
}