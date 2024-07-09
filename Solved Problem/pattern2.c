#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int t=n+4, s=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=s; j++){
            printf(" ");
        }
        for(int j=1; j<=t; j++){
            printf("*");
        }
        s++;
        t-=2;
        printf("\n");
    }
    return 0;
}