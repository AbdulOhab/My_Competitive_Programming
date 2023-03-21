//C - ABC Tournament
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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<pow(2,n-1);j++)
        {
            cout<<arr[j]<<endl;
        }
    }

}
