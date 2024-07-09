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
    int flag=1;
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
      
            if(i==j || (i+j==r-1)){
                if(a[i][j]!=1){
                    flag=0;
                    continue;
                }
                else{
                    continue;
                }
            }
            if(i!=j || (i+j!=r-1)){
                if(a[i][j]!=0){
                    flag=0;
                    continue;
                }
                else{
                    continue;
                }
                
            }
            
        }
    }
    if(r!=c){
        printf("NO\n");
    }
    else if(flag==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
    return 0;
}