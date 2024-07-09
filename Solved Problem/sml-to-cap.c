#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void small_to_capital(char a)
{
    if(a>='a' && a<='z'){
        a='A'+a-'a';
    }
    else{
        return;
    }
    printf("%c", a);
}
int main()
{
    int c;
    scanf("%c", &c);
    small_to_capital(c);
    return 0;
}