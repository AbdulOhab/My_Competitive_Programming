#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main(int argc, char const *argv[]) {
  int n,m;
  cin >>n>>m;
  char arr[n][m];
  for(int i=0;i<n;i++)
  {
    for (int j = 0; j < m; j++) {
      cin>>arr[i][j];
    }
  }
    int br = -1, bc = -1;
    int len = 0;
    for (int r = 0; r < n; r++) {
      for (int c = 0; c < m; c++) {
        if (arr[r][c] == 'B') {
          if (br == -1 and bc == -1) {
            br = r;
            bc = c;
          }
          len++;
        }
      }
      if (br != -1 and bc != -1) {
        break;
      }
    }
    br += len / 2 + 1;
    bc += len / 2 + 1;
    cout << br << " " << bc << endl;
    return 0;

  return 0;
}
// int a,b;
// int j=-1,i=-1,k;
// int main()
// {
//
//   cin>>a>>b;
//   string s;
//   while(j<0)
//   {
//     cin>>s;
//     j=s.find('B');
//     i++;
//   }
//   k=(s.rfind('B')-s.find('B'))/2+1;
//   cout<<i+k<<" "<<j+k;
//   return 0;
// }
