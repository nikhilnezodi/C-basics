#include <stdio.h>

int main(void)
{
    int num,i,mul;  #Declara
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Table of %d \n",num);
    printf("======================\n");
    for(i=1;i<=12;i++)
    {   mul = num*i;
        printf("%d * %d = %d\n",num,i,mul);
    }
    return 0;
}