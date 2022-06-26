class Solution {
public:
    int maxProfit(vector<int>& v) {
    int mx= 0 ;
      for(int i=1;i<v.size();i++)
      {
        if( v[i] > v[i-1] )
        {
          mx+=v[i]-v[i-1];
        }
      }
      return mx;
    }
};
