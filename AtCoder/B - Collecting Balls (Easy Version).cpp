#include <bits/stdc++.h>
#include<cstdio>
#include<algorithm>
using namespace std;
int N, K;
int X[100];
int main()
{
    cin>>N>>K;
    for(int i = 0; i < N; ++i)
    {
        cin>>X[i];
    }
    int ans = 0;

    for(int i = 0; i < N; ++i)
    {
        int tmp = min(X[i], K - X[i]);
        //cout<<"TY"<<tmp<<endl;
        ans += tmp;
    }
    printf("%d\n", ans * 2);
    return 0;
}
