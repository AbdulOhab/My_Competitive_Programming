//bainary seartch
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

bool solve(string s) {
   unordered_map<char, int> v;
   for(auto u:s)
   {
     v[u]++;
     //v[u-'0']++;
   }
   // for(auto i:v)
   // {
   //   cout<<i.first<<" "<<i.second<<"\n";
   // }
   bool pairt=0;
   for(auto i:v)
   {
     int t=i.second%3;
     if(t==0) continue;
     else if(!pairt and t==2) pairt=1;
     else return false;
   }
   return pairt;
}

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  string s;
  s = "111222";
  cout<<solve(s);
	return 0;
}
