#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
	int TotalPairs(vector<int>nums, int k){
		map<int,int>mp;
		for(int i = 0; i < nums.size(); i++){
			mp[nums[i]]++;
		}
		int cnt = 0;// difference equal to zero
		if(k == 0){
			for(auto i: mp){ // frequency of element is greater than one then distinct pair is possible
				if(i.second > 1)
					cnt++;
			}
		}// difference is not equla to zero
		else{
			for(auto i: mp){// frequency of element + k is not zero then distinct pair is possible
				if(mp.find(i.first + k) != mp.end()){
					cnt++;
				}
			}
		}
		return cnt;
	}
};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.TotalPairs(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}
//TLE
// #include<bits/stdc++.h>
// using namespace std;
//
// class Solution{
// 	public:
// 	int TotalPairs(vector<int>nums, int k){
//     int n=nums.size();
//     vector<pair<int, int>> v;
//         for ( int i = 0; i < n; i++ )
//         {
//             for ( int j = 0; j < n; j++ )
//             {
//                 if ( i != j && nums[i] - nums[j] == k )//i != j &&
//                 {
//                     v.push_back (make_pair(nums[i], nums[j]));
//                 }
//               }
//            }
//            sort ( v.begin(), v.end() );
//            int Si= unique ( v.begin(), v.end() ) - v.begin();
//            return Si;
//       }
// };
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int n, k;
// 		cin >> n >> k;
// 		vector<int>nums(n);
// 		for(int i = 0; i < n; i++)
// 			cin >> nums[i];
// 		Solution ob;
// 		int ans = ob.TotalPairs(nums, k);
// 		cout << ans <<"\n";
// 	}
// 	return 0;
// }
