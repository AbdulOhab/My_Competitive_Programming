class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      sort(nums1.begin(),nums1.end());
      sort(nums2.begin(),nums2.end());
      vector<int> v;
      unordered_map<int,int>mp;
      for(auto i:nums1) mp[i]++;
      for(auto j:nums2)
      {
        if(mp[j]>0)
        {
          v.push_back(j);
          mp[j]--;
        }
      }
      return v;

    }
};
