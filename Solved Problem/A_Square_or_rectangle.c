#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    int w,h;
    
    for(int i=0; i<t;i++){
        scanf("%d %d", &w, &h);
        if(w==h){
        printf("Square\n");
    }
    else{
        printf("Rectangle\n");
    }
    }
    return 0;
}