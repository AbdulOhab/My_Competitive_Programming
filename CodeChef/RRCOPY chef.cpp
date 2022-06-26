#include<iostream>
#include<cstdio>
#include<set>
using namespace std;

int main()
{

    int n,value,m;
    cin>>n;
    while(n--)
    {
        cin>>m;
        set<int>v;
        for(int j=0; j<m; j++)
        {
            cin>>value;
            v.insert(value);
        }
        //set<int>::iterator it;
        cout<<v.size()<<std::endl;
    }
    return 0;

}

