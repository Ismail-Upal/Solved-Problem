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
        for(int j=0; j<r; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int flag=1;
    if(r!=c){
        flag=0;
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<r; j++){
            if(i==j){
                continue;
            }
            if(a[i][j]!=0){
                flag=0;
            }
        }
    }
    if(flag==1){
        printf("daigonal\n");
    }
    else{
        printf("not daia\n");
    }

    return 0;
}