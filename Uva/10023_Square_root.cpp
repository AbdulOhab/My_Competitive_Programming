/**
 *    @author: Ab_ohab
 *    created: 27.03.2021 12:04:29
 *    created: 01.04.2021 16:21:29
 *    created: 13.5.2021 16:21:29
 *    created: 15.5.2021 16:21:29
**/
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cmath>
#include <math.h>
#include <cstring>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#define endl "\n"

//const long double eps = 1e-1000;

class Solution
{
public:
    long long int floorSqrt(long long int x)
    {
        double l = 0 , r = x;
        while( l<=r)
        //for(int i=0;i<10000;i++)
        {
          double mid = ( l + r )/2.0;
          if (mid == r || mid == l) return  floor (mid);

          if( mid * mid > x ) r = mid;
          else l = mid;
        }
        return floor ( l );
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}


// const double prec = 10E-15;
// long long int newtons(double i) {
//     // initial guess
//     double x = i / 2;
//
//     double d = i;
//     double nx = 0;
//     while (abs(d) > prec) {
//         nx = x - (x*x - i)/(2*x);
//         d = nx - x;
//         x = nx;
//     }
//     return nx;
// }
// class Solution{
//   public:
//     long long int floorSqrt(long long int x)
//     {
//       if(x == 0 || x == 1) {
//             return x;
//       }
//       ll l , r;
//       l = 1 , r = x+1;
//       while( r-l > 1 )
//       {
//         long double mid = ( l + r )/2.0;
//         if( mid == l || mid == r )  l = mid;
//
//         if( mid * mid > x ) r = mid;
//         else l = mid;
//       }
//       return floor ( l );
//     }
// };
