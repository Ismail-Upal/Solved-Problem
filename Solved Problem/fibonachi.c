#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int a=0, b=1, s=0;
    for(int i=1; i<=n; i++){
        printf("%lld ",a);
        s=a+b;
        a=b;
        b=s;
    }
    return 0;
}
//a=a-b;
//b=b+a;
//a=b-a;