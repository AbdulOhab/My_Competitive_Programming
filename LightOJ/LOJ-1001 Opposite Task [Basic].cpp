#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        int n;
        scanf("%d", &n);
        if(n<=10){
          printf("%d %d\n", 0, n);
        }
        else if(n>10){
          printf("%d %d\n", 10, n-10);
        }
      }
    }
    return 0;
}
