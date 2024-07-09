#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int my_abs(int n)
{
    if(n<0){
        n=n*(-1);
    }
    return n;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ans=my_abs(n);
    printf("%d", ans);
    
    return 0;
}