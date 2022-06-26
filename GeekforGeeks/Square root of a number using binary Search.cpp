#include<bits/stdc++.h>
using namespace std;

const double eps = 1e-12;
class Solution{
  public:
    long long int floorSqrt(long long int x)
    {
      double l = 0 , r = x;
      //while( r - l > eps )
      for(int i=0;i<100;i++)
      {
        double mid = ( l + r )/2.0;
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
