#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
      int i=max_element(arr.begin(),arr.end())-arr.begin();
      return i;
    }
};

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  vector<int> v={0,10,5,2};
  Solution obj;
  cout<<obj.peakIndexInMountainArray(v)<<endl;
	return 0;
}
