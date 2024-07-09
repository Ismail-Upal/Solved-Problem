#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int c[n];
    for(int i=0; i<n; i++){
        scanf("%d",&c[i]);
    }
    int i, max=c[0], min=c[0], maxindx=0, minindx=0;
    for(int i=0; i<n; i++){
        if(c[i]>max){
            max=c[i];
            maxindx=i;
        }
        if(c[i]<min){
            min=c[i];
            minindx=i;
        }
    }
    c[maxindx]=min;
    c[minindx]=max;
    for(int i=0; i<n; i++){
        printf("%d ", c[i]);
    }
    return 0;
}