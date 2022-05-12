#include <stdio.h>
#define M 8
#define N 8
int main()
{
  // declare and initialize an array
  int arr[M][N] = 
 		{{1,1,0,0,0,1,0,0},{1,1,1,0,0,0,0,0},{0,1,1,0,1,1,0,0},{0,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0},{1,0,1,0,0,1,0,0},{1,0,0,1,0,0,1,0},{0,0,0,0,0,1,0,1}};
  
  // display 2D array using for loop
  int i;
  printf("A\t\tB\t\t[C]\t\t[D]\t\tE\t\tF\t\tG\t\tH\n");
    
  // outer loop for row
  for(int i=0; i<M; i++) {
    // inner loop for column
    for(int j=0; j<N; j++) {
        printf("%d\t\t", arr[i][j]);
    }
    printf("\n"); // new line
  }
  
  //point location
  printf("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n5");
  printf("\nAt point: F");
  printf("\nNow at point A");
  printf("\nNow at point B");
  printf("\nNow at point C");
  printf("\npoint: C arrived to charging station");

  return 0;
}