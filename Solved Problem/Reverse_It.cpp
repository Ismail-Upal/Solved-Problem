#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string nm;
    int cls;
    string sec;
    int id;
};
int main()
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].nm>>a[i].cls>>a[i].sec>>a[i].id;
    }
    for(int i=0,j=n-1; i<j; i++,j--){
        swap(a[i].sec,a[j].sec);
    }
    for(int i=0; i<n; i++){
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<endl;
    }
    return 0;
}