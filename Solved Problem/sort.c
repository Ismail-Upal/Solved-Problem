#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], tmp;
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                continue;
            }
            else{
                tmp=a[i];//swap
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}