#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void print(int n, int i)
{
    if(i==n+1) return;
    print(n, i+1);
    if(i!=1){
        printf("%d ", i);
    }
    else{
        printf("%d", i);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    print(n, 1);
    return 0;
}