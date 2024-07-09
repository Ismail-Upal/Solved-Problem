#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int V[N];
    for(int i=0; i<N; i++){
        scanf("%d ", &V[i]);
    }
    int sum_pos=0, sum_neg=0;
    for(int i=0; i<N; i++){
        if(V[i]>=0){
            sum_pos=sum_pos+V[i];
        }
        else{
            sum_neg=sum_neg+V[i];
        }
    }
    printf("%d %d", sum_pos, sum_neg);
    return 0;
}