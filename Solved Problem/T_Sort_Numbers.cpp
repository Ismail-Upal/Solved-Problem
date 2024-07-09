#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    for(int i=0; i<3; i++){
        cin>>a[i];
    }
    int b=a[0], c=a[1],d=a[2];
    for(int i=0; i<2; i++){
        for(int j=i+1; j<3; j++){
            if(a[i]>a[j]){
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(int i=0; i<3; i++){
        cout<<a[i]<<endl;
    }
    cout<<endl;
    cout<<b<<endl<<c<<endl<<d;
    return 0;
}