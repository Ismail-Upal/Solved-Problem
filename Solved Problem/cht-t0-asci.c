#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void char_to_ascii(char a)
{
    printf("%d", a);
}
int main()
{
    char c;
    scanf("%c", &c);
    char_to_ascii(c);
    return 0;
}