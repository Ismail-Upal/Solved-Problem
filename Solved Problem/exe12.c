#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+a[i];
    }
    double avrg=(double)sum/n;
    int max=a[0];
    int min=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("sum=%d\naverage=%.2lf\nmaximum=%d\nminimum=%d\n", sum, avrg, max, min);
    return 0;
}