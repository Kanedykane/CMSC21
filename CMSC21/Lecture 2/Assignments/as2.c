#include <stdio.h>

int main() {

  int n, reverse = 0, remainder;

  printf("Please enter a 3-digit number: ");
  scanf("%d", &n);
  
  if (n < 100) {
   printf("Invalid Input! Number should have 3 digits");
   }
   
   else if (n > 999) {
      printf("Invalid Input! Number should have 3 digits only");
   }
   
   else {
       while (n != 0) {
           remainder = n % 10;
           reverse = reverse * 10 + remainder;n /= 10;
           }
       
       printf("Reverse: %d", reverse);
   }

  return 0;
}