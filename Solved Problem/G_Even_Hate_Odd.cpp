#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int cnto=0,cnte=0;
        for(int i=0; i<n ; i++){
            if(a[i]%2==0){
                cnte++;
            }
            else{
                cnto++;
            }
        }
        int o=cnto,e=cnte;
        if(n%2!=0){
            cout<<-1<<endl;
        }
        else if(cnto==cnte){
            cout<<0<<endl;
        }
        else if(cnto>cnte){
            while(cnto!=cnte){
            cnto--;
            cnte++;
            if(cnto==cnte){
                cout<<o-cnto<<endl;
                break;
            }
            }

        }
        else if(cnto<cnte){
            while(cnto!=cnte){
                cnto++;
                cnte--;
                if(cnto==cnte){
                    cout<<e-cnte<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}