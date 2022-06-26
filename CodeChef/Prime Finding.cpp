#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

const int mx=1e6+123;
bool is_prime[ mx ];
std::vector<int> prime;
void primeGen(int n) {

  memset(is_prime,1,sizeof(is_prime));
  is_prime[1] = 0;

  for( int i = 2;i <= n; i++ ) //[n ln n];
  {
    for( int j = i+i; j <= n; j += i )
    {
      is_prime[j]=0;
    }
  }
  for( int i=2;i<n;i++)
  {
    if(is_prime[i]==1)
    {
      prime.push_back(i);
    }
  }
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    primeGen(n*n);
    cout<<2<<" ";
    for(int i=1;i<n;i++){
      cout <<prime[i] <<" ";
    }
    return 0;
}
