#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


class Solution {
public:
    void rotate(vector<int>& v, int k) {

      int length=v.size();
      vector<int> ans;
      k=k%length;
      if(k==0) return;
      for(int i=length-k;i<v.size();i++)
      {
        ans.push_back(v[i]);
      }
      int len= v.size()-k;
      for(int j=0;j<len;j++)
      {
        ans.push_back(v[j]);
      }
      for(int i=0;i<length;i++){
            v[i]=ans[i];
      }

    }
};

int main(int argc, char const *argv[])
{
   //optimize();
   Solution obj;
   //vector<int> v{1,2,3,4,5,6,7};
   vector<int> v{-1,-100,3,99};
   obj.rotate(v,2);
   return 0;
}
