
int main()
{
    int n; cin>>n;
    for(int i=0; i<n; i++){
        string s; cin>>s;

    }
    int q;cin>>q;
    bool flag=true;
    while(q--){
        string c;
        cin>>c;
        for(int i=0; i<c.size(); i++){
            if(c[i]!=a[i]) flag=false;
        }
    }
    if(flag) cout<<"yes";
    else cout<<"no";
    return 0;
}