#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    char a[102];
    for(int i=0; i<t; i++){
        scanf("%s", a);
        int len = strlen(a);
        int lastchar=a[len-1];
        int lastnum=lastchar-'0';
        if(lastnum%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }
    return 0;
}