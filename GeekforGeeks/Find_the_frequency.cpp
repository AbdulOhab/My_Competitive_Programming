#include <bits/stdc++.h>
using namespace std;
int findFrequency(vector<int> v, int x){
  map<long long,int>cnt;
  for(auto u : v) cnt[u]++;
  for(auto u:cnt) cout<<u.first<<" "<<u.second<<endl;
  return cnt[x];
}

int main() {

	    int N;
	    cin >> N;
	    vector<int> v;
	    for(int i = 0;i<N;i++){
	        int k;
	        cin >> k;
	        v.push_back(k);
	    }
      map<long long,int>cnt;
      for(auto u : v) cnt[u]++;
      for(auto u:cnt) cout<<u.first<<" "<<u.second<<endl;
	    int x;
	    cin >> x;
	    cout << cnt[x] << endl;
	return 0;
}
