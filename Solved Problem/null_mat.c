#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int r,c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    int element=r*c;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int cnt=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(a[i][j]==0){
                cnt++;
            }
        }
    }
    if(element==cnt){
        printf("Zero matrix\n");
    }
    else{
        printf("not zero matrix");
    }
    return 0;
}