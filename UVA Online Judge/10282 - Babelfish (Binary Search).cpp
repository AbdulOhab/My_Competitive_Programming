#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
const double PI = acos(-1);
const double eps = 1e-9;
#define MOD 1000000007
#define mem(a,val) memset(a,val,sizeof(a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll bsearch(ll low, ll high)
{
	if (low >= high) {
	   return low;
	}
	ll mid = low + (high-low)/2;
	bool condition =           			//test for set of 2 elements, no yes! if wrong, change mid
	condition ? low = mid : high = mid-1 ;          // maintain the invariant [low,high)
							// other case, low = mid+1 : high = mid , invariant is (low,high]
	return bsearch(low,high);
}

int main(int argc, char const *argv[])
{
   optimize();
   string line,temp;
   map<string,string> Babel;
   while(getline(cin,line)){
     if(line == "") break;

     stringstream ss(line);
     string key,value;
		 ss<<line;
     ss>>value>>key;
     Babel[key] = value;

   }
   while(cin>>temp){
     if(Babel[temp] != ""){
       cout<<Babel[temp]<<endl;
     }
     else{
       cout<<"eh"<<endl;
     }
   }

   return 0;
}
