#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    
    char c;
    scanf("%c", &c);

    int a,b; scanf("%d%d",&a,&b);
    switch (c)
    {
    case '+':
        printf("%d/n",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%f",(float)a/b);
        break;
    }
    return 0;
}