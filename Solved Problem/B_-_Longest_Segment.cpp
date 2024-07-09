#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    int a[124],b[124];
    double mx=INT_MIN;
    for(int i=0;i<t;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            int x1=a[i];
            int y1=b[i];
            int x2=a[j];
            int y2=b[j];

            double c=sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));

            mx=max(c,mx);
        }
    }
    cout<<fixed<<setprecision(10)<<fixed<<mx;

    return 0;
}