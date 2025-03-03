#include<stdio.h>
#include "pi.h"
#define DEBUG
#define AREA(r) PI*r*r
int main(void)
{
    int radius = 10;
    int area = AREA(radius);


#ifdef DEBUG
    printf("Debug Mode");
#endif
}
