#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    char c[102];
    while(t--){
        scanf("%s",c );
        int len=strlen(c);
        if(len>10){
            printf("%c%d%c", c[0], len-2, c[len-1]);
            printf("\n");
        }
        else{
            printf("%s", c);
            printf("\n");
        }
    }
    return 0;
}