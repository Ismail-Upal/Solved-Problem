#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
long long int sum(long long int a[], int n, int i)
{
    if(i==n) return 0;
    long long int s=sum(a,n,i+1);
    return s+a[i]; 
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]);
    }
    long long int s=sum(a,n,0);
    printf("%lld",s);
    return 0;
}