class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        sort(nums1.begin(), nums1.end() );
        sort(nums2.begin(), nums2.end() );
        for( auto u:nums1)
        {
            if(binary_search(nums2.begin(),nums2.end(),u))
            {
                ans.push_back(u);
            }
        }
        int sx=unique(ans.begin(), ans.end() )-ans.begin();
        while(ans.size()>sx) ans.pop_back();
        return ans;
    }
};
