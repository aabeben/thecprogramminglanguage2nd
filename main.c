#include <stdio.h>

/* copy input to output; 1st verion */
main(){
  int c;

  while((c = getchar()) != EOF)
    putchar(c);
}
