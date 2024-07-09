#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    int cons=0;
    for(int i=0; i<strlen(s); i++){
        if(s[i]!='a' && s[i]!='o' && s[i]!='e' && s[i]!='i' && s[i]!='u'){
            cons++;
        }
    }
    printf("%d", cons);
    return 0;
}