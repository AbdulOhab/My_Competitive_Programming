#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
      string s;
      cin>>s;
      reverse(s.begin(),s.end());
      int a=stoi(s);
      cout<<a<<endl;
    }
    return 0;
}
