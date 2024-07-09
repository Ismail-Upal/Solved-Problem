#include<stdio.h>
int main()
{
    char op;
    int a,b;
    scanf("%d %c %d", &a, &op, &b);
    float result;
    switch (op)
    {
    case '+':
        result=a+b;
        break;
    case '-':
        result=a-b;
        break;
    case '*':
        result=a*b;
        break;
    case '/':
        result=(float)a/b;
        break;
    default:
        break;
    }
    printf("%d %c %d = %.2f", a, op, b, result);
    return 0;
}