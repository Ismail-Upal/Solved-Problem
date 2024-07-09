#include<bits/stdc++.h>
using namespace std;
void insert_heap(vector<int>&v, int x){
    v.push_back(x);
    int cur_ind=v.size()-1;
    while(cur_ind!=0){
        int parent_ind=(cur_ind-1)/2;
        if(v[parent_ind]<v[cur_ind]){
            swap(v[parent_ind],v[cur_ind]);
        }
        else break;
        cur_ind=parent_ind;
    }
}
void delete_heap(vector<int>&v){
    v[0]=v[v.size()-1];
    v.pop_back();
    int cur=0;
    while(true){
        int left_ind=cur*2+1;
        int right_ind=cur*2+2;
        int last_ind=v.size()-1;
        if(left_ind<=last_ind && right_ind<=last_ind){
            if(v[left_ind]>= v[right_ind && v[left_ind]>v[cur]]){
                swap(v[left_ind], v[cur]);
                cur=left_ind;
            }
            else if(v[right_ind]>=v[left_ind] && v[right_ind]>v[cur]){
                swap(v[right_ind], v[cur]);
                cur=right_ind;
            }
            else break;
        }
        else if(left_ind<=last_ind){
            if(v[left_ind]>v[cur]){
                swap(v[left_ind],v[cur]);
                cur=left_ind;
            }
            else break;
        }
        else if(right_ind<=last_ind){
            if(v[right_ind]> v[cur]){
                swap(v[right_ind], v[cur]);
                cur=right_ind;
            }
            else break;
        }
        else{
            break;
        }
    }
}
void print_heap(vector<int>v){
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>v;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        insert_heap(v,x);
    }
    delete_heap(v);
    print_heap(v);
    return 0;
}