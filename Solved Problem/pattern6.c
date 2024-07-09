#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s=0, t=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=s; j++){
            printf(" ");
        }
        for(int j=1; j<=t; j++){
            printf("*");
        }
        printf("\n");
        if(i<=(n+1)/2){
            s++;
            t-=2;
        }
        else if(i>(n+1)/2){
            s--;
            t+=2;
        }
        
    }
    return 0;
}