#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n+1];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int pos, val;
    scanf("%d %d", &pos, &val);
    for(int i=n+1; i>pos; i--){
        a[i]=a[i-1];
    }
    a[pos]=val;
    for(int i=0; i<n+1; i++){
        printf("%d ", a[i]);
    }
    return 0;
}