#include <bits/stdc++.h>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <array>
using namespace std;
int main()
{
    string a;
    std::cin>>a;

    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='4' and a[i+1]=='4' and a[i]=='7' and a[i]=='7')
        {
            std::cout<<"YES"<<std::endl;
            break;
        }
        else
        {
            std::cout<<"NO"<<std::endl;
        }
    }

}
