//A. Petya and Strings
#include <bits/stdc++.h>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <array>
using namespace std;

int main()
{
    vector<int> v;
    string a;
    cin>>a;
    int len=a.size();
    for(int i=0; i<len; i++)
    {
        if (a[i]>='1' && a[i]<='3')
        {
            v.push_back(a[i]-'0');
        }
    }
    sort(v.begin(),v.end());
    cout<<v[0];
    for(int i=1; i<v.size(); i++)
    {
        cout<<"+"<<v[i];
    }
    cout<<endl;
    return 0;
}
int main()
{
	// fastIO();
	string s ;
	cin >> s;
	int len = s.size();

	for(int i = 0; i < len; i += 2) {
		for(int j = 0; j < len - 1; j += 2) {
		// i += 2 && j += 2 will skip indexes of '+' sign
			if(s[j] > s[j+2]) {
		swap(s[j],s[j+2]);
		}
	}

}
cout << s << endl;
return 0;
}
