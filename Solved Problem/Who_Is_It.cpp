#include<bits/stdc++.h>
using namespace std;
class stud
{
    public:
        int id;
        char name[100];
        char sec[100];
        int mrk;
};
int main()
{
    int t;
    cin>>t;
    for(int m=1; m<=t; m++){
        stud a,b,c;
        cin>>a.id>>a.name>>a.sec>>a.mrk;
        cin>>b.id>>b.name>>b.sec>>b.mrk;
        cin>>c.id>>c.name>>c.sec>>c.mrk;

        if((a.mrk>b.mrk)&&(a.mrk>c.mrk)){
            cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<a.mrk<<endl;
        }
        else if((b.mrk>a.mrk)&&(b.mrk>c.mrk)){
            cout<<b.id<<" "<<b.name<<" "<<b.sec<<" "<<b.mrk<<endl;
        }
        else if((c.mrk>a.mrk)&&(c.mrk>b.mrk)){
            cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<c.mrk<<endl;
        }

        else if(a.mrk==b.mrk){
            if(a.id<b.id){
                cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<a.mrk<<endl;
            }
            else{
                cout<<b.id<<" "<<b.name<<" "<<b.sec<<" "<<b.mrk<<endl;
            }
        }
        else if(b.mrk==c.mrk){
            if(b.id<c.id){
                cout<<b.id<<" "<<b.name<<" "<<b.sec<<" "<<b.mrk<<endl;
            }
            else{
                cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<c.mrk<<endl;
            }
        }
        else if(c.mrk==a.mrk){
            if(c.id<a.id){
                cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<c.mrk<<endl;
            }
            else{
                cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<a.mrk<<endl;
            }
        }
    }
    return 0;
}