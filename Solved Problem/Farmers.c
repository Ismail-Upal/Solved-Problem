#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    int m1, m2, d, d1, m, ans;
    for(int i=0; i<t; i++){
        scanf("%d %d %d\n", &m1, &m2, &d);
        m=m1+m2;
        d1=(m1*d)/(m1+m2);
        ans=d-d1;
        printf("%d\n", ans);
    }
    return 0;
}