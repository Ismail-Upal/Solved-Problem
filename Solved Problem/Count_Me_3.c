#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    char s[10001];
    int cap=0, sml=0, dig=0;
    for(int i=0; i<t; i++){
        scanf("%s", s);
        for(int i=0; i<strlen(s); i++){
            if(s[i]>='A' && s[i]<='Z'){
                cap++;
            }
            else if(s[i]>='a' && s[i]<='z'){
                sml++;
            }
            else{
                dig++;
            }
        }
        printf("%d %d %d\n", cap, sml, dig);
        cap=0,sml=0,dig=0;
    }
    
    return 0;
}