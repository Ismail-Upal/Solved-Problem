#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t,ans;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        int n,ans=0;
        scanf("%d", &n);
        int a[n];
        for(int i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        int x;
        scanf("%d", &x);

        for(int i=0; i<n; i++){
            
            if(x==a[i]){
                ans=1;
                break;
            } 
        }
        if(ans==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}