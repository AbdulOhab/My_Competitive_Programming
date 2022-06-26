#include <bits/stdc++.h>
using namespace std;

int main() {

	    int N;
	    cin >> N;
	    vector<string> v;
	    for(int i = 0;i<N;i++){
	        string k;
	        cin >> k;
	        v.push_back(k);
	    }
      map<string,int>cnt;
      for(auto u : v) cnt[u]++;
      //for(auto u:cnt) cout<<u.first<<" "<<u.second<<endl;
			int twice_cunt=0;
			for(auto u:cnt)
			{
				if(u.second==2) twice_cunt++;
			}
			cout<<twice_cunt<<endl;
	return 0;
}
