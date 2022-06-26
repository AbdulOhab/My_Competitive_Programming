#include <bits/stdc++.h>
#include<stack>
using namespace std;

//int main()
//{
//    int a,b,c;
//    int a1=0,a2=0,a3=0;
//    int g,h,t;
//    cin>>a>>b>>c;
//
//    stack<int>v1;
//    stack<int>v2;
//    stack<int>v3;
//    stack<int>u1;
//    stack<int>u2;
//    stack<int>u3;
//
//    for(int i=0; i<a; i++)
//    {
//        cin>>g;
//        v1.push(g);
//        a1=a1+g;
//
//    }
//
//    while(!v1.empty()){
//        u1.push(v1.top());
//        v1.pop();
//    }
//    for(int j=0; j<b; j++)
//    {
//        cin>>h;
//        v2.push(h);
//        a2=+h;
//    }
//     while(!v1.empty()){
//        u2.push(v2.top());
//        v2.pop();
//    }
//    for(int k=0; k<c; k++)
//    {
//        cin>>t;
//        v3.push(t);
//        a3=+t;
//    }
//     while(!v2.empty()){
//        u3.push(v3.top());
//        v3.pop();
//    }
//
//    while(a1!=a2 || a1!=a3)
//    {
//        if(a1>=a2 && a1>=a2)
//        {
//            a1-=u1.top();
//            u1.pop();
//        }
//
//        else if(a2>=a1 && a2>=a3)
//        {
//            a2-=u2.top();
//            u2.pop();
//        }
//
//        else
//        {
//            a3-=u3.top();
//            u3.pop();
//        }
//    }
//
//    cout<<a3;
//
//    return 0;
//
//}

int main()
{
    int i,na,nb,nc,ma=0,mb=0,mc=0;

    stack<int> a,b,c,sa,sb,sc;

    cin>>na>>nb>>nc;

    for(i=0; i<na; i++)
    {
        int x;
        cin>>x;
        a.push(x);
        ma+=x;

    }
    while(!a.empty())
    {
        sa.push(a.top());
        a.pop();
    }
    for(i=0; i<nb; i++)
    {
        int x;
        cin>>x;
        b.push(x);
        mb+=x;
    }
    while(!b.empty())
    {
        sb.push(b.top());
        b.pop();
    }
    for(i=0; i<nc; i++)
    {
        int x;
        cin>>x;
        c.push(x);
        mc+=x;
    }
    while(!c.empty())
    {
        sc.push(c.top());
        c.pop();
    }
    while ( ma != mb || mb != mc  )
    {
        if(ma>=mb && ma>=mc)
        {
            ma-=sa.top();
            sa.pop();
        }
        else if(mb>=ma && mb>=mc)
        {
            mb-=sb.top();
            sb.pop();
        }
        else
        {
            mc-=sc.top();
            sc.pop();
        }
    }

    cout<<ma;
    return 0;
}
