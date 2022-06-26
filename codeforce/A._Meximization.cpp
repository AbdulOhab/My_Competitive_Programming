#include<bits/stdc++.h>
using namespace std;

void solve(){
  int input;
  cin>>input;
  while(input--)
  {
    int second_input;
    cin>>second_input;
    int arr[second_input];
    for (int i =0; i<second_input; i++) {
      cin>>arr[i];
    }

    sort(arr,arr+second_input);
    set<int> ss;
    vector<int> v;

    for (int j = 0; j < second_input; j++) {
      if(ss.find(arr[j])!=ss.end())
      {
        v.push_back(arr[j]);
      }
      else
      {
        ss.insert(arr[j]);
      }
    }
    for(int k:ss)
    {
      cout << k << " ";
    }
    for(int l:v)
    {
      cout << l << " ";
    }
    cout<<endl;
    // for (auto i=ss.begin(); i!=ss.end();i++)
    // {
    //     cout << *i<<" ";
    // }
    // for(int i=0;i<v.size();i++)
    //    {
    //      cout<<v[i]<<" ";
    //    }
     }
}
int main() {
  solve();
  return 0;
}
