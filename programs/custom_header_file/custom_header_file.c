#include <stdio.h>
#include "header_file/variables.h"

int main(){
  printf("Custom Header file variables: \n");
  a = 5;
  b = 6.2;
  c = 'c';
  d = true;

  printf("The variables from the custom header file are: \n");
  printf("a: %d\nb: %f\nc: %c\nd: %s\n", a, b, c, d ? "true" : "false");
  return 0;
}
