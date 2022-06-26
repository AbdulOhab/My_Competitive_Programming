// 1001. Reverse Root
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int i=0;
    long long int a;
    double b[131000];


    while(scanf("%llu",&a)!=EOF)
        //for(int j=0;j<=5;j++)
    {
        //scanf("%llu",&a);
        b[i]=sqrt(a);
        i++;
    }
    i=i-1;
    for(i=i; i>=0; i--)
    {
        printf("%.4lf\n",b[i]);
    }

    return 0;
}
/*part 2;
#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

int main()

{
    vector<double> v;

    double n;

    while(cin>>n) v.push_back(n);

    for(int i=v.size()-1;i>=0;i--) cout<<setprecision(4)<<fixed<<sqrt(v[i])<<endl;

    return 0;
}*/
