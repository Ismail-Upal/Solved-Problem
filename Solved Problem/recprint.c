#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void fun(int i)
{
    if(i==-4) return;
    printf("%d\n", i);
    fun(i-1);
}
int main()
{
    fun(5);
    return 0;
}