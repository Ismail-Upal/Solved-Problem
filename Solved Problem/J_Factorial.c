#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
long long int fac(long long int n)
{
   if(n==0) return 1;
    long long int f=fac(n-1);
    return f*n;
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int ans=fac(n);
    printf("%lld", ans);
    return 0;
}