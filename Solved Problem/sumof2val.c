#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]+a[j]==8){
                printf("%d + %d = 8\n", a[i], a[j]);
                break;
            }
            else{
                continue;
            }
        }
       
    }
    
    return 0;
}