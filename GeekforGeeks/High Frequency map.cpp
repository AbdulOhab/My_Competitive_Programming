int solve(vector<int>& nums) {
    map<int,int>v;
    for(auto u:nums)
    {
        v[u]++;
    }
    int ans=0;
   for(auto i:v)
   {
       ans=max(ans,i.second);
     //cout<<i.first<<" "<<i.second<<"\n";
   }
   return ans;
}
