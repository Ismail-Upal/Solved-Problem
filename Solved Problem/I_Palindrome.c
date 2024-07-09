#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char c[1001];
    scanf("%s", c);
    int len=strlen(c);
    int is_pal=1;
    for(int i=0, j=len-1; i<j; i++, j--){
        if(c[i]!=c[j]){
            is_pal=0;
        }
    }
    if(is_pal==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}