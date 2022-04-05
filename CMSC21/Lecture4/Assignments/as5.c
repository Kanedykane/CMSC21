#include<stdio.h>

int main(){
   
   int i,days;
   int start;
   
   printf("Enter number of days in month: ");
   scanf("%d",&days);
   
   if (days < 28)  {
       printf("Invalid Input!");
   }
   
   else if (days > 31) {
       printf("Invalid Input!");
   }
   
   else {
       printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
       scanf("%d",&start);
       
       for(i=1;i<start;i++)
       printf(" ");
       for(i=1;i<=days;i++){
           printf("%3d",i);
           if((start+i-1)%7==0)
           printf("\n");
       }
   }
   return 0;
}