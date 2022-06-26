#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

//when n is odd => sum = (n+1)/2
//when n is even => sum = (-1)*n/2

ll s(int n)
{
  if(n%2==1)
  {
    return(n+1)/2;
  }
  return -n/2;
}
int main(int argc, char const *argv[]) {

  for(int i=1;i<=100;i++)
  {
    cout<<s(i)<<" ";
  }
  return 0;
}

    //when n is odd => sum = (n+1)/2
    //when n is even => sum = (-1)*n/2
