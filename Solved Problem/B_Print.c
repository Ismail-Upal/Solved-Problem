#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void print(int n)
{
    for(int i=1; i<=n; i++){
        printf("%d", i);
        if(i!=n){        
            printf(" ");
        }    
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    print(n);

    return 0;
}