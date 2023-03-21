#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      int a,b;
      std::vector<char>v;
      cin>>a>>b;
      char arr[b+1];
      for (int j = 0; j < a; j++) {
        cin>>arr[j];
      }
      for (int h = 0; h <a; h++) {
        if(h==b) continue;
        else v.push_back(arr[h]);
      }
      // for (int y = 0; y <v.size(); y++) {
      //   cout<<arr[y]<<endl;
      // }
      string first,second;
      int len=v.size();
      for (int p = 0; p <=len/2; p++) {
        first+=v[p];
        second+=v[len-p-1];
      }
      reverse(v.begin(), v.end());
      for (int u = 0; u <v.size(); u++) {
        second+=v[u];
      }
      if(first==second)
      {
        cout<<"YES\n";
      }
      else
      {
        cout<<"NO\n";
      }
    }
    return 0;
}
