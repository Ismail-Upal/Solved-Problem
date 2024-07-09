#include<stdio.h>
void sum(int a, int b, int c)
{
    printf("sum is %d\n", a+b+c);
    printf("sub is %d\n", a-b-c);
    printf("mul is %d\n", a*b*c);
}
int main()
{
    sum(5,5,12);
    sum(4,5,6);
    
    return 0;

}