#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d", &N);
    for(i=1; i<=12; i++){
        printf("%d * %d = %d\n", N, i, N*i);
    }
    return 0;
}