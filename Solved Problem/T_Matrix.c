#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int prim=0, secn=0;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                prim=prim+a[i][j];
            }
            if(i+j==n-1){
                secn=secn+a[i][j];
            }
        }
    }
    printf("%d", abs(prim-secn));
    
    return 0;
}