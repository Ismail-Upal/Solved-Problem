#include<stdio.h>
int main()
{
    long long int n,m,k;
    scanf("%lld %lld %lld", &n, &m, &k);
    int min, min1=0;

    if(n<=m && n<=k){
        min=n;
    }
    else if(m<=n && m<=k){
        min=m;
    }
    else{
        min=k;
    }

    n=n-min;
    m=m-min;
    k=k-min;
    n=n/2;
    if(n!=0 && k!=0 && m==0){
        if(k<=n){
            min1=k;
        }
        else{
            min1=n;
        }
    }
    printf("%d", min+min1);
    return 0;
}