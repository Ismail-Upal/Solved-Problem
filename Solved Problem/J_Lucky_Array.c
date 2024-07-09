#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int min=a[0];
    for(int i=0; i<n; i++){
        if(a[i]<min){
           min=a[i];
        }
    }
    
    int cnt=0;
    for(int i=0; i<n; i++){
        if(a[i]==min){
           cnt++;
        }
    }
    if(cnt%2!=0){
        printf("Lucky\n");
    }
    else{
        printf("Unlucky\n");
    }
    
    return 0;
}