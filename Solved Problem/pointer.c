#include<stdio.h>

int main()
{
    int x=10;
    printf("%p\n", &x); //addres
    int *p=&x;
    //printf("%p\n", p);//address
   // printf("%d\n", *p);//10
   *p=500;
   printf("%d\n", x);//500

    return 0;
}