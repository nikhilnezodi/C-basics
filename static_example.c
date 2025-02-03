//static variable is declared and initialized only once and can be used across multiple function calls.
// its value is preserved across multiple calls.
#include<stdio.h>
void foo(void)
{
    static int a = 0;
    printf("a = %d\n",a);
    a++;
}

int main(void)
{
    foo(); // prints 0 and a is incremented to 1
    foo(); // a is already initialized once, now it is not re-initialized again. so a = 1 and later incremented to 2.
    foo(); // a is already initialized once, now it is not re-initialized again. so a = 2 and later incremented to 3.
}