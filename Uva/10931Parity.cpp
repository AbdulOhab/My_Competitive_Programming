#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a[10], n, i,b,j,k,d;
    int c=0;
    int t=0;
    int h=0;

    while(cin>>n && n)
    {
        for(i=0; n>0; i++)
        {

            a[i]=n%2;

            if(n&2) t+=1;
            n= n/2;
            c++;


        }

        cout << "The parity of ";
        do
        {
            cout << a[--c];
        }
        while ( c > 0 );
        cout << " is " <<t<< " (mod 2)." << endl;
    }

    return 0;
}

