#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string nm;
    int cls;
    string sec;
    int id;
    int mat;
    int eng;
    int tot;
};
bool cmp(student a,student b)
{
    if(a.tot==b.tot){
        if(a.id<b.id) return true;
        else return false;
    }
    else if(a.tot>b.tot) return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].nm>>a[i].cls>>a[i].sec>>a[i].id>>a[i].mat>>a[i].eng;
    }
    for(int i=0; i<n; i++){
        a[i].tot=a[i].mat+a[i].eng;
    }
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++){
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<" "<<a[i].mat<<" "<<a[i].eng<<endl;
    }
    return 0;
}