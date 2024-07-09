#include<stdio.h>

int main()
{
    float x, p;
    scanf("%f %f", &x, &p);

    
    float a=((p*100)/(100-x));
    printf("%.2f", a);
    return 0;
}