class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
      int i = v.size()-1;

      while( i>=0)
      {
        if(v[i]==9) v[i] = 0;
        else
        {
          v[i]+=1;
          return v;
        }
        i--;
      }
      v.insert(v.begin(),1);
      return v;
    }
};
