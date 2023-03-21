#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

bool comp(int a, int b)
{
    return (a < b);
}

int main() {
    string s;
    std::vector<int> v;
    int Q;
    cin>>Q>>s;

    int len=s.size();
    int c=0;
    int o=0;
    int d=0;
    int e=0;
    int r=0;
    int a=0;
    int m=0;
    int t=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='c')
        {
          c++;
        }
        else if(s[i]=='o')
        {
          o++;
        }
        else if(s[i]=='d')
        {
          d++;
        }
        else if(s[i]=='e')
        {
          e++;
        }
        else if(s[i]=='r')
        {
          r++;
        }
        else if(s[i]=='a')
        {
          a++;
        }
        else if(s[i]=='m')
        {
          m++;
        }
        else if(s[i]=='s')
        {
            t++;
        }

    }
    cout <<std::min({ c, o, d, e, r, a, m, t }, comp) << "\n";
  return 0;
}
