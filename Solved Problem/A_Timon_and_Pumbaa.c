#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum=a-b;
    if(sum>=0){
        printf("%d", sum);
    }
    else{
        sum=0;
        printf("%d",sum);
    }
    return 0;
}