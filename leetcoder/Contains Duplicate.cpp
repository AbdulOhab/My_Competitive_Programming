//Contains Duplicate
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>s;
        int len=nums.size();
        for(int i=0;i<len;i++)
        {
            s.insert(nums[i]);
        }
        if(len==s.size()) return false;
        else return true;
    }
};
