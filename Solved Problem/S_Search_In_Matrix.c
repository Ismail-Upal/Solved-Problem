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
    int x;
    scanf("%d", &x);
    int flag=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(a[i][j]==x){
                flag=1;
            }
        }
    }
    if(flag==1){
        printf("will not take number\n");
    }
    else{
        printf("will take number\n");
    }
    return 0;
}