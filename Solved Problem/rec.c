#include<stdio.h>
void func(int i, int n, char s[]){
    if(i==n)return;
    func(i+1,n,s);
    printf("%c",s[i]);
}
int main()
{
    int n; 
    scanf("%d", &n);
    char s[n];
    for(int i=0;i<10;i++){
        scanf("%s",&s);
    }
    func(0,n,s);
    return 0;
}
