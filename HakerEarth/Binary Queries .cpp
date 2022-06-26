#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    //int i;
    int x;
    int c,r,l;

    cin>>n>>m;
    int a[n+1];
  		for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
  while(m--)
    {

        cin>>c;
        if(c==1)
        {

            cin>>x;
            if(a[x]==1)
            {
                a[x]=0;
            }
            else
            {
              a[x]=1;
            }
        }
            else
            {
                cin>>l>>r;
                if(a[r]==1)
                    cout<<"ODD\n";
                else
                    cout<<"EVEN\n";
            }

      }
    }
