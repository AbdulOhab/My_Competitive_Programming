#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(int argc, char const *argv[])
{
   optimize();
   string a;
   cin>>a;
   if(a == "A" or a =="E" or a == "I" or a == "O" or a == "U"){
     cout<<"Vowel"<<endl;
   }
   else{
     cout<<"Consonant"<<endl;
   }
   return 0;
}
