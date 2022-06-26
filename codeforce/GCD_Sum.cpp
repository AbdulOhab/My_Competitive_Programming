/**
 *    @author: Ab_ohab
 *    created: 29.03.2021 20:38:29
**/
//A. GCD Sum My third solution
// #include<bits/stdc++.h>
// #include <algorithm>
// using namespace std;
// using ull = unsigned long long;
// typedef long long ll;
//
// ll sumofNumber(ll s)
// {
//   ll sum=0,m;
//   while(s>0){
//     m=s%10;
//     sum=sum+m;
//     s=s/10;
//   }
//   return sum;
// }
//
// int main(int argc, char const *argv[]) {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
//   ll a;
//   cin>>a;
//   while(a--)
//   {
//     ll n;
//     cin>>n;
//     if(n<=12)
//     {
//       cout<<"12"<<endl;
//       continue;
//     }
//     for(ll i=n; i<=1000000000000000000; i++)
//     {
//       ll y= sumofNumber(i);
//       ll g;
//       g= __gcd(i,y);
//       if(g>1)
//       {
//           cout<<i<<endl;
//           break;
//       }
//     }
//     //cout<<gccd(n)<<endl;
//   }
//   return 0;
// }
/*
**
 *    @author: Ab_ohab
 *    created: 29.03.2021 20:38:29
**/
//A. GCD Sum My first solution
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

ll sumofNumber(ll s)
{
  ll sum=0,m;
  ll num=s;
  while(s>0){
    m=s%10;
    sum=sum+m;
    s=s/10;
  }
  ll gcd=__gcd(num,sum);
  return gcd;
}


int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll a;
  cin>>a;
  while(a--)
  {
    ll n;
    cin>>n;
    if(sumofNumber(n)!=1)
    {
      cout<<n<<endl;
    }
    else if(sumofNumber(n+1)!=1)
    {
      cout<<n+1<<endl;
    }
    else if(sumofNumber(n+2)!=1)
    {
      cout<<n+2<<endl;
    }
  }
  return 0;
}

/**
 *    @author: Ab_ohab
 *    created: 29.03.2021 20:38:29
**/
// //A. GCD Sum My second solution
// #include<bits/stdc++.h>
// #include <algorithm>
// using namespace std;
// using ull = unsigned long long;
// typedef long long ll;
//
// ll sumofNumber(ll s)
// {
//   ll sum=0,m;
//   while(s>0){
//     m=s%10;
//     sum=sum+m;
//     s=s/10;
//   }
//   return sum;
// }
// int gccd(ll num)
// {
//   ll& t=num;
//   ll a=sumofNumber(t);
//   ll n1=t;
//   ll n2=a;
//   ll k=__gcd(n1,n2);
//   return k;
// }
//
// int main(int argc, char const *argv[]) {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
//   ll a;
//   cin>>a;
//   while(a--)
//   {
//     ll n;
//     cin>>n;
//     if(n>1)
//     {
//     int j=n;
//     while(1)
//     {
//       if(gccd(j)==3)
//       {
//         cout<<j<<endl;
//         break;
//       }
//       else{
//         j++;
//       }
//     }
//   }
//   else
//   {
//     break;
//   }
//     //cout<<gccd(n)<<endl;
//   }
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
//
// long long int gcd(long long int a,long long int b)
// {
//     if (a == 0)
//         return b;
//     return gcd(b % a, a);
// }
// int main() {
//   long long int t,x,sum,tmp;
//   cin>>t;
//   while(t--)
//   {
//     cin>>x;
//     int k=0,p=x,c;
//     while(true)
//     {
//     tmp=p+k;
//     c=tmp;
//     sum=0;
//     while(c>0)
//     {
//       sum+=c%10;
//       c=c/10;
//     }
//     if(gcd(tmp,sum)>1)
//     {
//        cout<<tmp<<endl;
//        break;
//     }
//     k++;
//     }
//   }
//   return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll ans,n,b;
//         cin>>n;
//         b=n;
//         ll b1;
//         while(b>0)
//         {
//             b1+=b%10;
//             b=b/10;
//         }
//         ans=__gcd(n,b1)	;
//         if(ans==1)
//         {
//             int i=1;
//             while(ans==1)
//             {
//                 b=n+i;
//                 b1=0;
//                 while(b>0)
//                 {
//                     b1+=b%10;
//                     b=b/10;
//                 }
//                 ans=__gcd(n+i,b1)	;
//                 i++;
//             }
//             cout<<n+i-1<<endl;
//         }
//         else
//             cout<<n<<endl;
//     }
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// ll findsum(ll n)
// {
//     ll sum=0;
//     while(n!=0)
//     {
//         sum+= n%10;
//         n=n/10;
//     }
//     return sum;
// }
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n;
//         cin>>n;
//         if(n<=12)
//         {
//             cout<<12<<endl;
//             continue;
//         }
//         for(ll i=n; i<=1000000000000000000; i++)
//         {
//             ll x= findsum(i);
//             ll gcd= __gcd(i,x);
//             if(gcd>1)
//             {
//                 cout<<i<<endl;
//                 break;
//             }
//
//         }
//     }
//     return 0;
// }
