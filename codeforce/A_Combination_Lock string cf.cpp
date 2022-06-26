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
    string s1,s2;
    cin>>n;
    cin>>s1>>s2;
    int sm=0;
    for (int i = 0; i <n; i++)
    {
        // int sum = 0 , u = 0 , v = 0;
        // char Num1 = s1[i];
        // char Num2 = s2[i];
        //
        // u = Num1 - '0';
        // v = Num2 - '0';
        int x=s1[i]-'0';
        int y=s2[i]-'0';
        int sum=abs(x-y);
        if(sum>5)
        {
          sum = 10 - sum;
        }
        sm+=sum;

    }
    cout<<sm<<endl;

    return 0;
}
