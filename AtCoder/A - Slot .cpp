#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main()
{
    string n;
    cin>>n;
    int len= n.size();
    int flag=1;
    for(int i=0;i<len;i++)
    {
        if(n[i]==n[i+1])
        {
            flag++;
        }

    }
    if(len==flag)
    {
        cout << "Won"<< endl;
    }
    else
    {
       cout <<"Lost"<< endl;
    }


  return 0;
}
