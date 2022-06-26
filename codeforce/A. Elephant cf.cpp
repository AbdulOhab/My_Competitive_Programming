#include <iostream>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    int n,count;
    cin>>n;

    if(n%5==0)
        cout<<n/5;
    else
        cout<<(n/5)+1;
    return 0;
}
