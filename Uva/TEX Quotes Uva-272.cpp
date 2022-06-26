#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    int t=0;
    while(getline(cin,s)  )
    {
        while(s.find('"')+1)
        {
            if(t==0)
            {
                s.replace(s.find('"'),1,"``");
                t=1;
            }
            else
            {
                s.replace(s.find('"'),1,"''");
                t=0;
            }
        }
        cout<<s<<endl;

    }
    return 0;
}
