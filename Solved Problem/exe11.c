#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a=0, b=1, s=0,sum=0;
    for(int i=1; i<=n; i++){
        if(i==n){
            printf("%d = ",a);
        }
        else{
            printf("%d + ", a);
        }
        sum=sum+a;
        s=a+b;
        a=b;
        b=s;
    }
    printf("%d\n",sum);
    return 0;
}