int findFrequency(vector<int> v, int x){

    map<long long, int> cnt;

    for ( auto u : v ) cnt[u]++;
    return cnt[x];

}
