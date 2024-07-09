#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int v=strcmp(a,b);
    printf("%d", v);
/*   for(int i=0; ; ){
        if(a[i]=='\0' && b[i]=='\0'){
            printf("same\n");
            break;
        }
        else if(a[i]=='\0'){
            printf("  a choto\n");
            break;
        }
        else if(b[i]=='\0'){
            printf(" b choto\n");
            break;
        }

        if(a[i]==b[i]){
            i++;
           
        }
        else if(a[i]<b[i]){
            printf("  a choto\n");
            break;
        }
        else{
            printf(" b choto\n");
            break;
        }
    }*/
    return 0;
}