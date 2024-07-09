#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k=n-1, s=n-(n-1);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            printf(" ");
        }
        for(int j=s; j>0; j--){
            printf("%d", j);
        }
        k--;
        s++;
        printf("\n");
    }
    return 0;
}