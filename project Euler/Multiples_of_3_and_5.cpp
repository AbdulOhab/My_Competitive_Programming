/**
 *    @author: Ab_ohab
 *    created: 28.03.2021 21:12:29
**/
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

// triangular number: `sum{x}=1+2+..+x = x*(x+1)/2
ull sum(ull x)
{
  return x*(x+1)/2;
}
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ull n,h;
  cin>>n;
  while(n--)
  {
    cin>>h;
    h--; //not including that number

     // find sum of all numbers divisible by 3 or 5
    auto sumthree=3*sum(h/3);
    auto sumfive=5*sum(h/5);
    auto sumfifteen=15*sum(h/15);// however, those numbers divisible by 3 AND 5 will be counted twice
    cout<<(sumthree+sumfive-sumfifteen)<<endl;
  }

}
