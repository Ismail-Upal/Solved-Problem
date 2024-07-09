#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,k;
    scanf("%d %d", &n, &k);
    for(int i=1; i<n+1; i++){
        for(int i=1; i<k+1; i++){
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}