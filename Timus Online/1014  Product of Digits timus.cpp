#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int i,digit;
    cin>>i;
    vector<int> v;
    if(i == 0)
        return cout<<"10"<<endl,0;
    if(i == 1)
    return cout<<"1"<<endl,0;
    for (digit = 9 ; digit > 1 ; digit -- )
    {
        while ( i % digit == 0 )
        {
            i=i/digit;
            v.push_back(digit);
        }
    }
    if(i == 1)
    {
        for(i = v.size()-1; i >= 0; i--)
        {
            cout<<v[i];
        }
    }
    else cout<<"-1"<<endl ;
    return 0;
}
