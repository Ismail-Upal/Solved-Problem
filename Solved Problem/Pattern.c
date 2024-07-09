#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k=n-1, s=1;
    for(int i=1; i<(2*n); i++){
        for(int j=1; j<=k; j++){
            printf(" ");
        }
        for(int j=1; j<=s; j++){
            if(i%2==0){
                printf("-");
            }
            else{
                printf("#");
            }
        }
        if(i<n){
            k--;
            s=s+2;
        }
        else{
            k++;
            s=s-2;
        }
        printf("\n");

    }    
    return 0;
}