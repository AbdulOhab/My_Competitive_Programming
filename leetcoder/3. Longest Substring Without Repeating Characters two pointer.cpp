class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      set<int> v;
      for(int i=0;i<s.size();i++)
      {
        v.insert(s[i]);
      }
      return v.size();
    }
};
//not solve
