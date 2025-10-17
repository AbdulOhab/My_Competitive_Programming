//B - Count Balls
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int A,B,C;
    long int N;
    cin >> N >> A >> B;

    long int S =A+B;
    long int num=N/S;

    long int t=N%S;

    if(t>=A)
        cout<<A*num+A;
    else
        cout<<A*num+t;

}
