#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
long long int is_palindrome(char s[])
{
    long long int ans=1;
        for(int i=0, j=strlen(s)-1; i<j; i++, j--){
        if(s[i]!=s[j]){
            ans=0;
            break;
        }
    }
    
    return ans;
}

int main()
{
    char s[1001];
    scanf("%s", s);
    long long int ans=is_palindrome(s);
    if(ans==1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    
    return 0;
}