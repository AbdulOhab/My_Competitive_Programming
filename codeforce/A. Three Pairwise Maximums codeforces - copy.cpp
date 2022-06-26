#include<bits/stdc++.h>
using namespace std;

int h(int x,int y,int z)
{
    if(x==y&&y==z)
    {
        //cout<<"YES\n";
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    else if(z==y&&x<z)
    {
        //cout<<"YES\n";
        cout<<z<<" "<<x<<" "<<x<<endl;

    }
    else if(x==z && y<x)
    {
        //cout<<"YES\n";
        cout<<x<<" "<<y<<" "<<y<<endl;

    }
    else if(x==y && z<x)
    {
        //cout<<"YES\n";
        cout<<x<<" "<<z<<" "<<z<<endl;

    }
}


int main()
{
    long n,a,b,c;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        cin>>b;
        cin>>c;

        int x=max(a,b);
        int y=max(a,c);
        int z=max(b,c);

      if(x==y && y==z && z==x)
      {
        cout<<"YES"<<endl;;
        h(a,b,c);
      }
      else
      {
         cout<<"NO"<<endl;
      }
    }
    return 0;
}
//
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        int a[3];
//        cin>>a[0]>>a[1]>>a[2];
//        sort(a,a+3);
//        if(a[1]!=a[2])
//        {
//            cout<<"NO"<<endl;
//        }
//        else
//        {
//            cout<<"YES"<<endl;
//            cout<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
//        }
//
//
//    }
//
//    return 0;
//}

