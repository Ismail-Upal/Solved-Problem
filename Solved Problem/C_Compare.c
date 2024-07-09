#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char a[21], b[21];
    scanf("%s %s", a, b);
    int i=strcmp(a,b);
    if(i<0){
        printf("%s",a );
    }
    else if(i>0){
        printf("%s", b);
    }
    else{
        printf("%s", a);
    }
   /* int i=0;
    while(1){
        if(a[i]=='\0' && b[i]=='\0'){
            printf("%s", a);
            break;
        }
        else if(a[i]=='\0'){
            printf("%s", a);
            break;
        }
        else if(b[i]=='\0'){
            printf("%s", b);
            break;
        }
        if(a[i]==b[i]){
            i++;
        }
        else if(b[i]<a[i]){
            printf("%s", b);
            break;
        }
        else{
            printf("%s", a);
            break;
        }
    }*/
    return 0;
}