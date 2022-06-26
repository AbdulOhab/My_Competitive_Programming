#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long eps=13-6;
int main()
{
	optimize();
	int T;
	cin>>T;
	int tc=1;
	while(T--)
	{
    double AB,AC,BC,R;
    cin>>AB>>AC>>BC>>R;
    double l=0 , r=AB;
    for ( int i = 0; i < 100; i++ ){
    //ABC and ADE is identical triangle.
    double AD = (l+r)/2.00;
    double AE= (AD/AB)*AC;
    double DE= (AD/AB)*BC;
     //DE / AB = AC / DF = EF / BC geo throram using find AE and DE

    double sABC = ( AB + BC + AC ) / 2;
    double sADE = ( AD + AE + DE ) / 2;

    double areaTriABC =  sqrt ( sABC * ( sABC - AB ) * ( sABC - AC ) * ( sABC - BC ) );
    double areaTriADE =  sqrt ( sADE * ( sADE - AD ) * ( sADE - AE ) * ( sADE - DE ) );

    double areaTrp = areaTriABC - areaTriADE;
    if(R < ( areaTriADE/ areaTrp )) //this is ration;
    {
      r = AD;
    }
    else
    {
      l = AD;
    }
  }
  fraction();
  cout << "Case " << tc++ << ": " << l << endl;
	}
	return 0;
}
