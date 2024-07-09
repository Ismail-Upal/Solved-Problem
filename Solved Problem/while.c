#include<stdio.h>
#include<math.h>
int main()
{
    int A, B, C, D,x,y;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    x = pow(A,B);
    y = pow(C,D);


    if(x>y && x!=y){
        printf("YES");
    }
    else{
        printf("NO");
    }   

    return 0;  
}

