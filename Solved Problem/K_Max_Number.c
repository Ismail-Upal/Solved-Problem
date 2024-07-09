#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int max(int a[], int n, int i)
{
    if(i==n){
        return INT_MIN;
    }
    int mx=max(a,n,i+1);
    if(a[i]>mx){
        return a[i];
    }
    else{
        return mx;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int mx=max(a,n,0);
    printf("%d", mx);
    return 0;
}