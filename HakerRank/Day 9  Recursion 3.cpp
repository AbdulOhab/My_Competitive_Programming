#include <bits/stdc++.h>
using namespace std;

int factorial(int a)
{
  if(a== 1)
      {
          return 1;
      }
      else
      {
      return (a * (factorial(a-1))); //Recursion
      }
}

int main()
{
    int n;
    cin >> n;
    cout <<factorial(n)<< "\n";

    return 0;
}
