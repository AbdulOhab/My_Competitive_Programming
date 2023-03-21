/**
 *    @author: Ab_ohab
 *    created: 04.04.2021 20:50:29 sa
**/
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

string select_a="a";
string in_sert(string s,int i)
{
    string t;
    t=s.insert(i,select_a);
    return t;
}

void bangla(string sl)
{
    if(sl.size()==1)
    {
        cout<<"No"<<endl;
        return;
    }
    else
    {
        for(int i=0; i<sl.size()+1; i++)
        {
            string lp=in_sert(sl,i);
            string kp=lp;
            //cout<<kp<<endl;
            reverse(lp.begin(),lp.end());
            //cout<<lp<<endl;
            if(lp==kp)
            {
                cout<<"Yes\n";
                cout<<kp<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
    }

}
int main(int argc, char const *argv[])
{
    ios;
    int num;
    cin>>num;
    for(int i=0; i<num; i++)
    {
        string s;
        cin>>s;
        bangla(s);
    }
    return 0;
}
