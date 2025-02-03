#include<stdio.h>

int add(int a,int b);
int add(int x , int y)
{
    int sum = x+y;
    return sum;
}
int main()
{
    printf("\nSum = %d\n",add(5,3));
    return 0;
}