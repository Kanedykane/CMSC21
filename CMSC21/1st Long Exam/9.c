#include <stdio.h>

int main(){
    int row, column = 0;
    int size = 0 ;
    char cont = 'y';
    
    while(size == 0){
        printf("Enter square size:");
        scanf("%d", &size);
                
        for( row = 0 ;row < size ; row++){
            for(column = 0 ; column < size;column++){
                if (row==0 || row==size - 1 || column==0 || column==size - 1){
                    printf("*");
                }else{
                    printf(" ");
                }
            
            }
            printf("\n");

        }

        printf("Print another square? Enter y or n: ");
        scanf("%c", &cont);
        if (cont == 'n'){
            printf("END");
        }else if (cont != 'y'){
            printf("Not a valid choice. \n");
            
            printf("Print another square? Enter y/n: ");
            scanf("%c", &cont);
       }
       
    }
    return 0;
}