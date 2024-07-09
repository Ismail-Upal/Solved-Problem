// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;cin>>t;
//     while (t--)
//     {
//         int q;cin>>q;
//         vector<int>b(q);
//         for(int i=0;i<q;i++){
//             cin>>b[i];
//         }
//         vector<int>v(0);
//         v.push_back(b[0]);
//         int flag=0;
//         int i=1;
        
//         while (i<q)
//         {
//             int x; x=b[i];
//             if(flag==1 && x<=v.front() && x>=v.back()){
//                 v.push_back(x);
//             }
//             else if(flag==0 && x<=v.back() && x<=v.front()){
//                 v.push_back(x);
//                 flag=1;
//             }
//             else if(flag==0 && x>=v.back() && x>=v.front()){
//                 v.push_back(x);
//             }
//             i++;
//         }
//         int j=0,k=0;
//         while(j<b.size()){
//             if(b[j]==v[k]){
//                 cout<<1;
//                 j++;
//                 k++;
//             }
//             else{
//                 cout<<0;
//                 j++;
//             }
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int q;
        scanf("%d", &q);

        int last, max = 0;
        scanf("%d", &last);
        printf("1"); 

        for (int i = 1; i < q; i++) {
            int x;
            scanf("%d", &x);

            if (x >= last) {
                printf("1");
                last = x;
            } else {
                printf("0");
                max = 1;
            }
        }

        printf("\n");
    }

return 0;
}