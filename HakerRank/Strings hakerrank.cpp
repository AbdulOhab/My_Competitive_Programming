#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>

using namespace std;
//void reverse(string str)
//{
//   for (int i=str.length()-1; i>=0; i--)
//      cout << str[i];
//}
int main()
{
    string a,b,t;
    cin>>a;
    cin>>b;

    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a<<b<<endl;
//  reverse(a);
//  cout<<" ";
//  reverse(b);
    char c;
    c=a[0];
    a[0]=b[0];
    b[0]=c;

    cout<<a<<" "<<b;
    return 0;
}

