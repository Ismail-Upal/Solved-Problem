#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void print(int n)
{
    if(n==0) return;
    int x=n%10;
    print(n/10);
    printf("%d ", x);
}
int main()
{
    int t;
    scanf("%d", &t);
    
    for(int i=0; i<t; i++){
        int n;
        scanf("%d", &n);
        print(n);
        if(n==0){
            printf("0");
        }
        printf("\n");
    }
    return 0;
}