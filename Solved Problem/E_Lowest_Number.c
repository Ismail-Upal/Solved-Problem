#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &a[i]);
    }
    int min=INT_MAX, ind=n;
    for(int i=0; i<n; i++){
    if(a[i] < min){
            min=a[i];
            ind=i+1;
            
       }
        
    }
    printf("%d %d", min, ind);
    return 0;
}