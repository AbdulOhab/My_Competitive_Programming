//A. Petya and Strings
#include <bits/stdc++.h>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);
    if(a<b)
        cout<<"-1"<<endl;
    else if(a==b)
        cout<<"0"<<endl;
    else
        cout<<"1"<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();

    string s1, s2;
    cin >> s1 >> s2;

    for ( int i = 0; i < s1.size(); i++ ) s1[i] = tolower ( s1[i] );
    for ( int i = 0; i < s2.size(); i++ ) s2[i] = tolower ( s2[i] );

    if ( s1 < s2 ) cout << "-1";
    else if ( s1 > s2 ) cout << "1";
    else cout << "0";

}
