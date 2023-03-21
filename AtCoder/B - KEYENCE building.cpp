// #include <bits/stdc++.h>
// using namespace std;
// using ull = unsigned long long;
// typedef long long ll;
// typedef double dl;
// #define endl "\n"
// #define all(a) (a).begin(),(a).end()
// #define sz(x) (int)x.size()
// const double PI = acos(-1);
// const double eps = 1e-9;
// #define MOD 1000000007
// #define mem(a,val) memset(a,val,sizeof(a))
// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define infile() freopen("D:/Coding_CP/Abdul_Ohab_InputFile.txt", "r", stdin);
// #define outfile()freopen("D:/Coding_CP/Abdul_Ohab_OutputFile.txt", "w", stdout);
//
// set <int> tl;
// void solve()
// {
//   for (size_t i = 1; i <= 200 ; i++) {
//     for (size_t j = 1; j <=200 ; j++){
//       int flag = (4*i*j) + 3*(i+j);
//       tl.insert(flag);
//     }
//   }
// }
//
// int main(int argc, char const *argv[])
// {
//    optimize();
//
//    solve();
//    int n;
//    cin>>n;
//
//    int cnt=0;
//    for (size_t i = 0; i < n; i++) {
//      int t;
//      cin>>t;
//
//      if(tl.find(t) == tl.end())
//      {
//        cnt++;
//      }
//    }
//
//    cout<<cnt<<endl;
//    return 0;
// }



//Md. Abu Nayeem
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main(){
   string pass ="";
   char ch;
   cout << "Enter pass\n";
   ch = _getch();
   //cout<<ch<<endl;

   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "Mitsakos"){
      cout << "\nAccess granted :P\n";
   }else{
      cout << "\nAccess aborted...\n";
   }
}
