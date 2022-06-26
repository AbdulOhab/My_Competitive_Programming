#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str,btr;
    cin>>n>>str;
    cout<<str[0];
    for(int i=1; i<str.size(); i++)
    {
        if((str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y')
                && (str[i-1]=='a' || str[i-1]=='e' || str[i-1]=='i' || str[i-1]=='o' || str[i-1]=='u' || str[i-1]=='y'))

        {

        }
        else
        {
            cout<<str[i];
        }

    }

    cout<<endl;
    return 0;
}
