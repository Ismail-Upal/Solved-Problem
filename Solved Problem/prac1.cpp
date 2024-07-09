#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int mark;
};
bool cmp(student a,student b)
{
    if(a.mark==b.mark){
        if(a.roll<b.roll)return true;
        else return false;
    }
    else if(a.mark>b.mark) return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].name>>a[i].roll>>a[i].mark;
    }
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].mark<<endl;
    }
    return 0;
}