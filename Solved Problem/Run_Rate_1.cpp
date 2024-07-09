#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        double r1,r2,b;cin>>r1>>r2>>b;
        double z=(300-b)/6;
        double x=double(r2/z);
         b=b/6;
         double y;
         if(r1<r2)y=0.00;
            else y=double((r1-r2+1)/b);
        cout<<setprecision(2)<<fixed<<x<<" "<<y<<endl;
    }
    return 0;
}