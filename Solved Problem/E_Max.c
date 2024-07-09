#include<stdio.h>
int main()
{
    int i,a, N;
    int max=0;
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        scanf("%d", &a);
            if(a>max){
                max=a;
            }
    }
    printf("%d\n",max);
    return 0;
}