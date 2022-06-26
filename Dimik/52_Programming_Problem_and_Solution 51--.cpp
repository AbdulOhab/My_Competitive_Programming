প্রবলেম - 51 [৫২ সমস্যা বই] খোঁজ দ্য সার্চ - ১
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--) {
      string s,l;
      cin>>s>>l;
      int i=s.find(l);
      cout<<i<<"\n";
    }
    return 0;
}
প্রবলেম - 52 [৫২ সমস্যা বই] খোঁজ দ্য সার্চ - ২
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int st(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();
    int i, j, coun=0;
    for (i=0; i<len1; i++)
    {
        if ( s1[i] == s2[0] )
        {
            for ( j=1; j<len2; j++)
            {
                if ( s1[j+i] != s2[j] ) break;
            }
            if (j==len2) coun++;
        }
    }
    return coun;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s,l;
        cin>>s>>l;
        cout<<st(s,l)<<"\n";
    }
    return 0;
}
#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s, s2;
        cin >> s >> s2;
        int len = s.size();
        int len2 = s2.size();
        int cnt = 0;
        for(int i = 0; i < len - (len2 - 1); i++){
            if(s.substr(i,len2) == s2) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
প্রবলেম - 72 ত্রিভুজ (ISCPC 2018 Preliminary)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n;
  cin>>n;
  int i;
  for (i = 0; i < n; i++)
  {
      double a, b, c, s;
      cin>>a>>b>>c;
      if(a+b<c || a+c<b||b+c<a) {
            printf("Oh, No!\n");
        }
        else
        {
          s = (a + b + c) / 2;
          s = sqrt(s * (s - a) * (s - b) * (s - c));
          printf("%0.2lf\n", s);
        }

  }
	return 0;
}
প্রবলেম - 83 দুই-এর পাওয়ার
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;
// Function to check if x is power of 2
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;

   return (ceil(log2(n)) == floor(log2(n)));
}
/* Function to check if x is power of 2*/
bool isPowerOfTw(int n)
{
    if (n == 0)
        return 0;
    while (n != 1)
    {
        if (n%2 != 0)
            return 0;
        n = n/2;
    }
    return 1;
}
int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
      int a;
      cin>>a;
      if(isPowerOfTwo(a)) cout<<"It's a power of 2"<<endl;
      else cout<<"Not a power of 2"<<endl;
  }
	return 0;
}
