#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string  t;
    int cot=0,flag=0;
    cin>>i;
    cin>>t;

    for(int j=0; j<i; j++)
    {
        if(t[j]==t[j+1])
        {
            cot++;
        }
    }
    cout<<cot<<endl;
    return 0;
}
