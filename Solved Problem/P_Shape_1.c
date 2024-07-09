#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=s; j++){
            printf("*");
        }
        s--;
        printf("\n");
    }
    return 0;
}