#include<stdio.h>
int main()
{
    int i,sum=0,n;
    scanf("%d", &n);
    
    while(n!=0){
        int a=n%10;
        sum=sum+a;
        n = n/10;
    }
    printf("%d", sum);

    
    return 0;
}
/*365
 3+6+5=print 

*/
        
    
    
