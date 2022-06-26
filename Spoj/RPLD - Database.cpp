#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

#define  In_The_Name_of_Allah

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    int number_of_student,Number_of_db;
    cin>>number_of_student>>Number_of_db;
    map<pair<int ,int>,bool>v;
    bool ok=1;
    for(int i=0;i<Number_of_db;i++)
    {
      int a,b;
      cin>>a>>b;
      if(v[{a,b}]) ok=0;
      v[{a,b}]=1;
    }
    if(ok==1) cout << "Scenario #"<<i<<": possible"<<endl;
    else cout << "Scenario #"<<i<<": impossible"<<endl;
  }
	return 0;
}
