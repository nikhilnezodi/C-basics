#include<stdio.h>
#include "pi.h"
#define DEBUG 3
#define AREA(r) PI*r*r
int main(void)
{
    int radius = 10;
    int area = AREA(radius);


#if DEBUG == 1
    printf("Debug Mode 1");
#elif DEBUG == 2
    printf("Debug Mode 2");
#else
    printf("Debug Mode 3");
#endif
}
