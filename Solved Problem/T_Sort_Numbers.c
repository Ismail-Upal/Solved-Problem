#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int a[3];
    for(int i=0; i<3; i++){
        scanf("%d", &a[i]);
    }
    int a1=a[0], b=a[1], c=a[2];
    for(int i=0; i<3; i++){
        for(int j=i+1; j<3; j++){
            if(a[i]>a[j]){
            int tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
            }
        }
    }
    for(int i=0; i<3; i++){
        printf("%d\n", a[i]);
    }
    printf("\n%d\n%d\n%d\n", a1, b, c);
    return 0;
}