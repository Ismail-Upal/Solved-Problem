#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char c[100002];
    int sz=sizeof(c);
    for(int i=0; i<sz; i++){
        fgets(c, sz, stdin);
    }
    for(int i=0; i<sz; i++){
        if(c[i]>=97 && c[i]<=122){
            c[i]='A'+(c[i]-'a');
        }
        else if(c[i]>=65 && c[i]<=90){
            c[i]='a'+(c[i]-'A');
        }
        if(c[i]==','){
            c[i]=' ';
        }
    }
    
        printf("%s", c);
    
    return 0;
}