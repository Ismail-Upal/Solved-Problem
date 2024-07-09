#include<stdio.h>
int main()
{
    double g;
    printf("Total grade :");
    scanf("%1f", &g);
    if(g>=7.00){
        printf("Able to direct admission\n");
    }
    else{
        printf("Has to give test\n");
        int n;
        scanf("%d", &n);
        if(n>60 && n<=100){
            printf("will get admission\n");
        }
        else if(n==60){
            printf("will be in waiting list\n");
        }
        else if(n<60){
            printf("wont get admission\n");
        }
    }
    return 0;
}