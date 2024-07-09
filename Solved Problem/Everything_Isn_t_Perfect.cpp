
#include <bits/stdc++.h>
using namespace std;


int main() {
   
    int n;
    cin >> n;
    if (n <= 1) {
        return false;
    }
    
    int Sum = 1; 
    int div = 2;
    
    while (div * div <= n) {
        if (n % div == 0) {
            Sum += div;
            int div1 = n / div;
            if (div != div1) {
                Sum += div1;
            }
        }
        div++;
    }
    if(Sum==n) cout<<"Yes";
    else cout<<"No";
    return 0;
}