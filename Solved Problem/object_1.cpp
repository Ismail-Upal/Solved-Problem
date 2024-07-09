#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    char name[188];
    int roll;
    int mak;
    student(    const char name[188], int roll , int mak){

        strcpy(this->name,name);
        this->roll=roll;
        this->mak=mak;
    }

};
int main()
{
    student a("rakib",43,234);
    student b("raht", 45,543);
    student c("robi",54,545);

    if((a.mak>b.mak) && (a.mak>c.mak)){
        cout<<a.name;
    }
    else if((b.mak>a.mak) && (b.mak>c.mak)){
        cout<<b.name;
    }
    else if((c.mak>a.mak) && (c.mak>b.mak)){
        cout<<c.name;
    }
   
    return 0;
}