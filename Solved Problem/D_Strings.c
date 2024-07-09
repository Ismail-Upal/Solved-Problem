#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char a[11], b[11];
    scanf("%s %s", a, b);
    int len_a=strlen(a), len_b=strlen(b);
    printf("%d %d\n", len_a, len_b);
    printf("%s%s\n", a, b);
    char tmp=a[0];
    a[0]=b[0];
    b[0]=tmp;
    printf("%s %s\n", a, b);
    return 0;
}