#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=n-1,s=1;
    for(int i=1; i<=(2*n)-1; i++){
        for(int j=1; j<=k; j++){
            printf(" ");
        }
        for(int j=1; j<=s; j++){
            printf("*");
        }
        if(i<n){
        k--;
        s++;
        }
        else{
            k++;
            s--;
        }
        printf("\n");
    }
    return 0;
}