#include<stdio.h>
int main()
{
    int n,fact=1;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    printf("Factorial of %d is %d\n", n,fact);

    
    int flag=1;
    for(int i=2; i<n; i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("%d is a Prime\n",n);
    }
    else{
        printf("%d is not a prime\n",n);
    }
    return 0;
}