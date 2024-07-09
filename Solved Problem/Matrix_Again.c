#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int r,c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=r-1; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<r; i++){
        for(int j=c-1; j<c; j++){
            printf("%d ", a[i][j]);
        }
       
    }
    return 0;
}