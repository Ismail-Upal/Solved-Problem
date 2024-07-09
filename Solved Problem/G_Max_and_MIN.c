#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void find_min_max(int a[], int n)
{
    int max=a[0];
    int min=a[0];
    for(int i=0; i<n; i++){
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("%d %d\n", min, max);
    
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    find_min_max(a, n);
    
    return 0;
}