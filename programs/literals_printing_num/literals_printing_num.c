#include <stdio.h>

int main(){
  int a = 10;
  int hex = 0xBEEF;
  int bin = 0b101101;

  float without_exp = 23.69;
  double with_exp = 420.69e-69;
  float b = 69.420f;

  printf("Integer Values: \nInteger: %d\nHexadecimal (Caps): %X\nHexadecimal (small): %x\nBinary: %b\n", a, hex, hex, bin);
  printf("\nFloat Values: \nWithout Exponent: %f\nWith Exponent: %e\nWith letter \'f\': %f\n", without_exp, with_exp, b);
}
