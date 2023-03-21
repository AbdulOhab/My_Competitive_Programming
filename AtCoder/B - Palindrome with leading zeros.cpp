// #include <bits/stdc++.h>
// using namespace std;
// using ull = unsigned long long;
// typedef long long ll;
// #define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//
// bool isPalindrome(string first)
// {
//   string second=first;
//   reverse(first.begin(),first.end());
//   return(second==first);
// }
// int main() {
//   ios;
//   int n;
//   cin>>n;
//   if(n == 0) {
//     cout << "Yes" << endl;
//     return 0;
//   }
//   while (n%10 == 0) {
//     n/=10;
//   }
//   // cout<<endl;
//   // cout<<n;
//   if(isPalindrome(to_string(n)))
//   {
//     cout<<"Yes"<<endl;
//   }
//   else
//   {
//     cout<<"No"<<endl;
//   }
//   return 0;
// }
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define ll signed long long int
using namespace std;

int main()
{
    fast;
    string s;
    cin>>s;
    ll len=s.length();
    for(ll i=len-1; i>=0; i--)
    {
        if(s[i]!='0')
            break;
        else
            s.erase (s.begin()+i);
    }
    string s1=s;
    reverse(s1.begin(),s1.end());
    //cout<<s<<endl;
    //cout<<s1<<endl;
    if(s==s1)
        cout<<"Yes";
    else
        cout<<"No";
}
