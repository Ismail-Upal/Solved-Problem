#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void fun(int i)
{
    if(i==6) return;
    fun(i+1);
    printf("%d\n", i);
}
int main()
{
    fun(1);
    return 0;
}