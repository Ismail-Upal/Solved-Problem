#include<stdio.h>
int main()
{
    long long int N, sum=0;
    scanf("%lld", &N);
    long long int A[N];
    for(int i=0; i<N; i++){
        scanf("%lld", &A[i]);
        sum = sum+A[i];
    }
    if(sum<0){
        printf("%lld", -sum);
    }
    else{
        printf("%d", sum);
    }
    return 0;
}