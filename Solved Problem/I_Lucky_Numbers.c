#include<stdio.h>
int main()
{
    int a, b;

    scanf("%d",&a);
   
    if(a>=10 && a<=99){
        b=a%10;
        a=a/10;
    }
    if(b==0){
        printf("YES\n");
    }
    else if(a%b==0 || b%a==0){
            printf("YES\n");       
        }   
    else{
        printf("NO\n");
    }
    
    return 0;
}