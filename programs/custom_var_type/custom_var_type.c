#include <stdio.h>

int main(){
    typedef unsigned int uint16_t;   //typedef <ANSI TYPE NAME> <CUSTOM NAME>
    
    uint16_t x, y;
    
    x = 40;
    y = 60;
    
    printf("The values of variables of custom type uint16_t are: \n");
    printf("x: %d\ny: %d", x, y);
}
