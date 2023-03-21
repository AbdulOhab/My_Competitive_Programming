#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//  int i,n,t;
//  int s;
//  int x,y,z;
//
//  cin>>t;
//  for(int i=0;i<t;i++)
//  {
//    cin>>x>>y>>z;
//    if ((x >= y && x <= z) || (x >= z&&x <= y))
//        printf("Case %d\n", x);
//    else if ((y >= x&&y <= z) || (y >= z&&y <= x))
//        printf("Case %d\n", y);
//    else if ((z >= y&&z <= x) || (z >= x&&z <= y))
//        printf("Case %d\n", z);
//  }
//   return 0;
// }
int main(){

    int T,ar[3];
    cin >> T;
    for(int t = 1; t <= T; t++){

        cin >> ar[0] >> ar[1] >> ar[2];
        sort(ar,ar+3);
        cout << ar[1] << endl;
    }
    return 0;
}
