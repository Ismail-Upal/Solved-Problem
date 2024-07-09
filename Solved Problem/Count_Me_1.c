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

    int cnt2=0, cnt3=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            cnt2++;
        }
        else if(a[i]%3==0){
            cnt3++;
        }
        
    }
    printf("%d %d\n", cnt2, cnt3);
    return 0;
}