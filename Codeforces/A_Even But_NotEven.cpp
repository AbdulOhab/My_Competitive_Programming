#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
  ios;
  int input;
  cin>>input;
  while(input--)
  {
    int number;
    string ebne;
    string ans="";
    cin>>number;
    cin>>ebne;
    for (int i = 0; i < number; i++) {
      int t=ebne[i]-'0';
      if(t%2 && ans.size()<2)
      {
        ans+=ebne[i];
      }
        //cout<<t<<endl;
    }
    //cout<<ans<<endl;
    if(ans.size()<2)
    {
      cout<<"-1"<<endl;
    }
    else
    {
      cout<<ans<<endl;
    }
  }
  return 0;
}
