#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countSquares(int N) {
      int x = sqrt(N);
      if (x * x == N) return x - 1;
      else return x;
};

class Solution {
  public:
    int countSquares(int N){
      return floor(sqrt ( N-1 ));
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.countSquares(N-1) << endl;
    }
    return 0;
}
