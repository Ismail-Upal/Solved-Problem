#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int tmp,i=0,j=n-1;
    while(i<j){
        tmp=a[j];
        a[j]=a[i];
        a[i]=tmp;
        i++;
        j--;

    }
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}