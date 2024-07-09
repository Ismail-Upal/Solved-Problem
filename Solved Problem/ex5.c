#include<stdio.h>
void check(int n){
    if(n%2==0){
        printf("%d is even\n", n);
    }
    else{
        printf("%d is odd\n", n);
    }
}
int main()
{
    int n; 
    scanf("%d",&n);
    check(n);
    return 0;
}