#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,lenght,sum,t;
    string  n;
    int cot=0,flag=0;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        cin>>n;
        if(n =="++X" || n=="X++")
        {
            cot++;
        }
        else if(n =="--X" || n=="X--")
        {
            flag++;
        }
    }
    sum=cot-flag;
    cout<<sum<<endl;
    return 0;
}
