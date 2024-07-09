#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void capital_to_small(char a)
{
    if(a>='A' && a<='Z'){
        a='a'+a-'A';
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
    capital_to_small(c);
    return 0;
}