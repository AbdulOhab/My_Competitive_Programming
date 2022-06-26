#include <iostream>
#include <map>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

string maximumFrequency(string s);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for(int i=0;i<t;i++)
    {
        string s;
        getline(cin,s);
        cout << maximumFrequency(s) << endl;
    }
    return 0;
}
string maximumFrequency(string s){
        string temp;
        vector<string>v;
        for(int i=0;i<s.size();i++)
        {
          if(isspace(s[i]))
          {
            v.push_back(temp);
            temp.clear();
          }
          else
          {
            temp+=s[i];
          }
         }
         v.push_back(temp);
         map<string,int> cnt;
         int maxi=0;
         for(auto i:v)
         {
           cnt[i]++;
           maxi=max(maxi,cnt[i]);
         }
         string ans;
         for(auto i: v)
         {
           if(cnt[i]==maxi)
           {
             ans=i;
             break;
           }
         }
        return ans + " " + to_string(maxi);
}
// string maximumFrequency(string str)
// {
//     map<string, int=""> mp;
//
//     stringstream ss(str);
//     string word;
//
//     string res;
//     int maxi = 0;
//
//     while(ss >> word)
//     {
//         mp[word]++;
//
//         maxi = max(maxi, mp[word]);
//     }
//
//     stringstream ss1(str);
//
//     while(ss1 >> word)
//     {
//         if(mp[word] == maxi)
//         {
//             return word + " " + to_string(maxi);
//         }
//     }
// }
