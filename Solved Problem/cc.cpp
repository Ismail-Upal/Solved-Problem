#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	int q; cin>>q;
    
	while(q--){
		int x; cin>>x;
		
        int l=0, r=n-1;
        int mid=l+(r-l)/2;
		while(l<=r){
            
			if(a[mid]==x){
				cout<<(mid+1)<<endl;
				break;
			}
			else if(x>a[mid]){
				l=mid+1;
			}
			else if(x<a[mid]){
                r=mid-1;
            }
		 }
	}
    return 0;
}