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

// by default a function is extern. That means the function can be used outside the file in other files also
// if a function is prefixed by static. It cannot be used outside the scope of the file.