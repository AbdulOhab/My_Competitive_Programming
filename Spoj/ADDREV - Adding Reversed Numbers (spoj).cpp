#include <iostream>
using namespace std;
class rev
{
public:
    sel(int n)
    {
        int r=0;
        while(n!=0)
        {
            r=r*10+n%10;
            n=n/10;
        }
        return r;
    }
};
int main()
{
    rev ob;
    int n;
    cin>>n;
    while(n--)
    {
        int a,s;
        cin >> a>>s;
        a=ob.sel(a);
        s=ob.sel(s);
        cout<<ob.sel(a+s)<<"\n";
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// int reverse(int n){
//  int r=0;
//  while (n != 0)
//    {
//       r = r * 10;
//       r= r + n%10;
//       n = n/10;
//    }
//  return r;
// }
// int main()
// {
//   int n;
//   cin>>n;
//   while(n--){
//    int a,b;
//    cin>>a>>b;
//  a=reverse(a);
//    b=reverse(b);
//    cout<<reverse(a+b)<<"\n";
//   }
//
//   return 0;
// }
