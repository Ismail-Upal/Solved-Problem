#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld", &a, &b);
    long long int c[a];
    for(int i=0; i<a; i++){
        scanf("%lld", &c[i]);
    }
    
    
    
    for(int i=0; i<a-1; i++){
        for(int j=i+1; j<a; j++){
        if(c[i]<c[j]){
            long long int tmp=c[i];
            c[i]=c[j];
            c[j]=tmp;
        }
        }
    }
    long long int s=0;
    for(int i=0; i<b; i++){
        if(c[i]<0){
            break;
        }else{
        s=s+c[i];
        }
    }
    printf("%lld", s);
    return 0;
}