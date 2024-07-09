#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int *p=&n;
    printf("the address of %d is %p\n", n,p);
    printf("Dereference value %d ",*p);
    return 0;
}