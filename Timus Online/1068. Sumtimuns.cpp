#include <iostream>

using namespace std;

int main()
{
    int N,sum;
    cin>>N;

    if(N>0)
        sum = N*(N+1)/2;

    else
        sum = 1+N*(1-N)/2;
    cout<<sum<<endl;

  //int s=N>0? N*(N+1)/2 : 1+N*(1-N)/2;
  return 0;
}
