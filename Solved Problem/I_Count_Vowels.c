#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int cnt(char s[], int i)
{
    if(s[i]=='\0') return 0;
    int ans=cnt(s, i+1);
    if(s[i]>='A' && s[i]<='Z' ){
        s[i]=s[i]+32;
    }
    if(s[i]=='a' || s[i]=='i' || s[i]=='e' ||s[i]=='o' || s[i]=='u'){
        return ans+1;
    }
    else{
        return ans;
    }
}
int main()
{
    char s[201];
    fgets(s,201, stdin);

    
    int c=cnt(s,0);
    printf("%d", c);
    return 0;
}