#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n;
	int k;
  string s;
  cin>>n>>k>>s;
  sort(s.begin(), s.end());
  char last=95;
  int ans=0;int len=0;
  for(int i=0;i<n;i++)
  {
    if(s[i]>=last+2)
    {
      last=s[i];
      ans+=s[i]-97+1;
      len++;
    }
    if(len>=k) cout<<ans,exit(0);
  }
  cout<<-1<<endl;
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    char last='a'-2;
    int ans=0;
    int len=0;
    for(int i=0;i<n;i++)
        if(s[i]>=last+2)
        {
            last=s[i];
            ans+=s[i]-'a'+1;
            len++;
            if(len>=k)
                cout<<ans,exit(0);
        }
    cout<<-1;
}
