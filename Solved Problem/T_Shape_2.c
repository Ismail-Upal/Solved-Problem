#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k=n-1, s=1;
    for(int i=1; i<=n; i++){
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
    return 0;
}