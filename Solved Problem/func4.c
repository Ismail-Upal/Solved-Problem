#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d", &a);
    int ans=abs(a);
    printf("%p", &ans);
    return 0;
}