class Solution {
public:
    int searchInsert(vector<int>& numbers, int target) {
        int lo=lower_bound(numbers.begin(),numbers.end(),target)-numbers.begin();
            return lo;
    }
};
