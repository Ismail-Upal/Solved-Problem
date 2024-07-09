#include<stdio.h>
int main()
{
    char C;
    scanf("%c", &C);
    if(C==(char)122){
        printf("a");
    }
    else{
        C=C+1;
        printf("%c",C);
    }
    return 0;
}