#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main(int argc, char const *argv[])
{

    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        ll n;
        cin>>n;
        ll root,row,colum,lackings;
        root=ceil(sqrt(n));
        lackings=root*root-n;

        if(lackings<root)
        {
          row=root;
          colum=lackings+1;
        }
        else
        {
          colum=root;
          row=n-(root-1)*(root-1);
        }
        if(root%2==0)
        {
          swap(colum,row);
        }
        cout<<"Case "<<i<<": "<<colum<<" "<<row<<endl;
    }

    return 0;
}
