#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n)
{
    int i;
    for (i=2; i<n; i++)
    {
        if(n % i==0)
            return false;
    }

    return true;
}

int nextprime(unsigned int n)
{
    int i=n+1;
    while(1)
    {
        if(isPrime(i))
            break;
        i++;
    }
    return i;
}


int main()
{
    int n;
    cin>>n;

    cout<<nextprime(n);
}
