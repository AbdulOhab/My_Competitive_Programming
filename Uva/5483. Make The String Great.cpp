//5483. Make The String Great
#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    string makeGood(string s)
    {
        for(int i=0; i<s.size()-2; i++)
        {
            if(s[i]>=0 ||)
            {

                cout<<""<<endl;
            }

            else
            {
            transform(s.begin(), s.end(), s.begin(), ::tolower);

            }

        }
        cout<<s<<endl;
    }
};

int main()
{
    Solution s;
    string my_str = "abBAcC";
    s.makeGood(my_str);

    return 0;
}
