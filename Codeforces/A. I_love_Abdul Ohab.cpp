#include <bits/stdc++.h>
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
    int a;
    cin>>a;
    int arr[a];
    int t=0,t1=0;
    int f=0;
    for(auto i=0;i<a;i++)
    {
       cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<a;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            t++;
            //f++;
        }
        else if(arr[i]<min)
        {
            min=arr[i];
            t++;
        }
    }
    //cout<<f<<"T"<<endl;
    cout<<t<<endl;
}
