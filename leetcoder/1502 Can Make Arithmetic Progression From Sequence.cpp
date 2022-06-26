#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int difference=arr[1]-arr[0];
        for(int i=1;i<arr.size();i++)
        {
          int df=arr[i]-arr[i-1];
          if(df!=difference) return false;
        }
        return true;
    }
};

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  vector<int> v={3,5,1};
  Solution obj;
  cout<<obj.canMakeArithmeticProgression(v)<<endl;
	return 0;
}
