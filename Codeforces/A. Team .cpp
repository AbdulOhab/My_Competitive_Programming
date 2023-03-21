//A. Team
#include<algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
using ull=unsigned long long;
typedef long long ll;

int main()
{
    int n=1;
    int count=0,log=0;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
      int j=0;
            if(arr[i][j]==1 and arr[i][j+1]==1)
            {
                count++;
            }
            else if(arr[i][j+1]==1 and arr[i][j+2]==1)
            {
                count++;
            }
            else if(arr[i][j+2]==1 and arr[i][j]==1)
            {
                count++;
            }
    }

   cout<<count <<endl;

    return 0;
}

