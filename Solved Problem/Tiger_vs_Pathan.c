#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    int n, tig=0, pat=0;
    char s[100001];
    for(int i=0; i<t; i++){
        tig=0;
        pat=0;
        scanf("%d", &n);
        scanf("%s", &s);
        for(int j=0; s[j]!='\0'; j++){
            if(s[j]=='T'){
                tig++;
            }
            else if(s[j]=='P'){
                pat++;
            }
        }
        if(tig==pat){
        printf("Draw\n");
        continue;
    }
    else if(tig>pat){
        printf("Tiger\n");
        continue;
    }
    else if(tig<pat){
        printf("Pathaan\n");
        continue;
    }
    
    }
    
    return 0;
}
  