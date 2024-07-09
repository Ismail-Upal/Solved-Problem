#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s;
    int a[26]={0};
    for(int i=0; i<n; i++){
        cin>>s;
        int val=s-'a';
        a[val]++;
    }
    for(int i=0; i<26; i++){
        while(a[i]--){
        cout<<char(i+'a');
        }
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, val;
//     cin >> n;
//     char s;
//     int alpha[26] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         cin >> s;
//         val = s - 'a';
//         alpha[val]++;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         if (alpha[i] != 0)
//             {
//                 while (alpha[i]--)
//                 {
//                     cout << char(i + 97);
//                 }
//             }
//     }
// return 0;
// }