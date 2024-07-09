#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    for(int i=1000; i>=1; i-- ){
        for(int j=1000; j>=1; j--){
            printf("%d\t", j);
        }
    }    
    return 0;
}