#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    long long int m, a, b, c, e;
    
    for(int i=0; i<t; i++){ 
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        int e=(a*b*c);        
       if(m%e==0){
        printf("%d\n", m/e);
       }
       else{
        printf("-1\n");
       } 
    }
    return 0;
}