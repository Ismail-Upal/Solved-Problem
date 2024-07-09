#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void print(int n, int i)
{
    if(i==n+1) return;
    printf("%d\n", i);
    print(n, i+1);
}
int main()
{
    int n;
    scanf("%d", &n);
    print(n, 1);
    return 0;
}