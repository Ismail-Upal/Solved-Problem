#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m=(n+1)/2+5, k=m-1, s=1;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=k; j++){
            printf(" ");
        }
        for(int j=1; j<=s; j++){
            printf("*");
        }
        k--;
        s+=2;
        printf("\n");
    }
    int kh=5, sh=n;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=kh; j++){
            printf(" ");
        }
        for(int j=1; j<=sh; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}