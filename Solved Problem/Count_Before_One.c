#include<stdio.h>
long long int count_before_one(int a[], int n)
{   
    int c=0;
    for(int i=0; i<n; i++){
        if(a[i]!=1){
            c++;
        }
        if(a[i]==1){
            break;
        }
        
    }
   
    return c;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    } 
    long long int ans=count_before_one(a, n);
    printf("%lld\n", ans);
    return 0;
}