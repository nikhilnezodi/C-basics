#include<stdio.h>
//global variables
int a; // by default global variable is assigned value 0
int b =20 ; 
void print_global();
int main(void)
{
 int c = 40; // local variable
 print_global();

}

void print_global()
{
    int d = 60; //local variable
    printf("\n a = %d\n b = %d",a,b);
}
