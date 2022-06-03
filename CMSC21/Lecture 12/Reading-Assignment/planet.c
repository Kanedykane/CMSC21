/* Checks planet names */

#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

// to keep track of the number of arguments or the argument count and argument values //
int main(int argc, char *argv[])
{
    // defines an array of strings // 
    char *planets[] = {"Mercury", "Venus", "Earth",
                     "Mars", "Jupiter", "Saturn",
                     "Uranus", "Neptune", "Pluto"};
                     
  // index for the for loop //                   
  int i, j;
  
  // this for loop is going through as many times as argc variable //
  for (i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++)
      if (strcmp(argv[i], planets[j]) == 0) {
        // can let you look what is inside of argv //
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    if (j == NUM_PLANETS)
      printf("%s is not a planet\n", argv[i]);
  }

  return 0;
}