class Solution {
public:
    int removeDuplicates(vector<int>& v) {
      int siz=unique(v.begin(),v.end())-v.begin();
      return siz;
    }
};
