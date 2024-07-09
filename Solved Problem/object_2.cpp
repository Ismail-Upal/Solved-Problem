#include<bits/stdc++.h>
using namespace std;
class person
{
public:
    int jer;
    char coun[100];
};
int main()
{
    person *dhoni=new person;
    dhoni->jer=10;
    char tmp[100]="India";
    strcpy(dhoni->coun,tmp);
    person *kohli=new person;
    kohli=dhoni;
    
    cout<<kohli->jer<<" "<<kohli->coun;
  delete[] dhoni;  
    return 0;
}