#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
const double PI = acos(-1);
const double eps = 1e-9;
#define MOD 1000000007
#define mem(a,val) memset(a,val,sizeof(a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(int argc, char const *argv[])
{
   optimize();
   int T;
   cin>>T;
   for (size_t i = 1; i <= T; i++) {
    cout << "Case " << i << ":" << endl;
    stack<string>forward_stack;
    stack<string> backward_stack;
    string t = "http://www.lightoj.com/";

    string s;
    while(cin>> s){
      if(s == "QUIT") break;

      if( s == "VISIT"){
        backward_stack.push(t);
        cin>> t;
        cout<<t<<endl;

        while(!forward_stack.empty()){
          forward_stack.pop();
        }
      }
      else if(s == "BACK"){
        if(backward_stack.empty()){
          cout<<"Ignored"<<endl;
          continue;
        }
        forward_stack.push(t);
        t = backward_stack.top();
        backward_stack.pop();
        cout<<t<<endl;
      }
      else if( s == "FORWARD"){
        if(forward_stack.empty()){
          cout<<"Ignored"<<endl;
          continue;
        }
        backward_stack.push(t);
        t = forward_stack.top();
        forward_stack.pop();
        cout<<t<<endl;
      }
    }
   }

   return 0;
}
