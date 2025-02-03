#include<stdio.h>
#include<malloc.h> // for apis to allocate memory from heap area; alloc,malloc,free

int a; // global variable which is not initialized  <- Uninitialized data segment
int b = 10; // global variable which is initialized <- Initialized data segment
static int c; // static variable which is not initialized <- Uninitialized data segment
static int d = 20; // static variable which is initialized <- Initialized data segment

void func(int arg1,int arg2) // arg1,arg2 <--memory from stack segment
{
    const int y = 20;   // Initialized data segment but readonly (not-modifiable)
    int e;  //<--memory from stack segment
    int f = 30;    //<--memory from stack segment
    static int g;   //<--Uninitialized data segment
    static int h = 40;  //<--Initialized data segment
    return;
}

int main(void)
{
    int i;   //<--memory from stack segment
    int j =50;   //<--memory from stack segment
    static int k;   //<--Uninitialized data segment
    static int l=60;    //<--Initialized data segment
    func(10,20);
    return 0;
}

/* 
-> Entire program gets stored in Text/code segment. Read only.
*/