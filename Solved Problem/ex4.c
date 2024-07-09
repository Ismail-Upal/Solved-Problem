#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);
    
    strcat(str1,str2);
    puts(str1);

    printf("The size of %s is %d\n", str1, strlen(str1));

    strcpy(str1,str2);
    puts(str1);
    return 0;
}