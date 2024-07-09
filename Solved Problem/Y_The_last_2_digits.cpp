#include <iostream>

using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    int a=A%100;
    int b=B%100;
    int c=C%100;
    int d=D%100;

    int x=a*b*c*d;
    int y=x%100;
    if(y<10){
        cout<<0<<y;
    }
    else cout<<y;

    return 0;
}
