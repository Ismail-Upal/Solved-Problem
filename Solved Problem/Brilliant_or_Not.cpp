#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    double c[n];
    int num[n];
    double gp[n];
    for(int i=0; i<n; i++){
        cin>>c[i]>>num[i];
    }
    for(int i=0; i<n; i++){
        if(num[i]>=80){
            gp[i]=4;
        }
        else if(num[i]>=75 && num[i]<80){
            gp[i]=3.75;
        }
        else if(num[i]>=70 && num[i]<75){
            gp[i]=3.50;
        }
        else if(num[i]>=65 && num[i]<70){
            gp[i]=3.25;
        }
        else if(num[i]>=60 && num[i]<65){
            gp[i]=3;
        }
        else if(num[i]>=55 && num[i]<60){
            gp[i]=2.75;
        }
        else if(num[i]>=50 && num[i]<55){
            gp[i]=2.50;
        }
        else if(num[i]>=45 && num[i]<50){
            gp[i]=2.25;
        }
        else if(num[i]>=40 && num[i]<45){
            gp[i]=2;
        }
        else if(num[i]<40){
            gp[i]=0;
        }
    }
    double t[n];
    double tot=0;
    double to=0;
    for(int i=0; i<n; i++){
        t[i]=gp[i]*c[i];
        tot=tot+t[i];
        to=to+c[i];
    }
    double g=tot/to;
  
    if(g>=3.50) cout<<"YES"<<endl;
    else if(g<3.50) cout<<"NO"<<endl;
    return 0;
}