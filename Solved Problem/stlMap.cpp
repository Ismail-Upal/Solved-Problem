#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;//map<key,value>mp
    //mp.insert({"shakib al hasan", 75});
    // mp.insert({"tamim iqbal", 24});
    // mp.insert({"shamim",39});
    // mp.insert({"akib",0});
    // for(auto it=mp.begin(); it!=mp.end(); it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }..any order
    // if(mp.count("akib")){
    //     cout<<"yes"<<endl;
    // }
    // else cout<<"Nai"<<endl;
    // cout<<mp["shamim"]<<endl;
    mp["shakib al hasan"]=23;
    mp["akib"]=25;
    mp["tamim"]=98;//easy way
    for(auto it=mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" "<<it->second<<" "<<endl;
    }
    return 0;
}