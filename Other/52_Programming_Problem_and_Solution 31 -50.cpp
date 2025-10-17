//প্রবলেম - 31 [৫২ সমস্যা বই] যোগ্য সংখ্যা - ২
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int j=0; j<n; j++)
    {
        ll num;
        cin>>num;
        if(num>=6)
        {
            printf("6\n");
        }
        if(num>=28)
        {
            printf("28\n");
        }
        if(num>=496)
        {
            printf("496\n");
        }
        if(num>=8128)
        {
            printf("8128\n");
        }
        if(num>=33550336)
        {
            printf("33550336\n");
        }
        if(j!=n-1) printf("\n");

    }
    return 0;
}
//প্রবলেম - 32 [৫২ সমস্যা বই] X এর গুণিতক
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(){
  int t;
  cin>>t;
  while(t--)
  {
    ll x,n;
    cin>>x>>n;
    if(n<x)
    {
      printf("Invalid!\n");
    }
    else
    {
      for(int i=x;i<=n;i+=x)
      {
        cout<<i<<"\n";
      }
    }
    printf("\n");
  }
	return 0;
}
//প্রবলেম - 33 [৫২ সমস্যা বই] বিভাজনসাধ্য-১
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(){
  int t;
  cin>>t;
  while(t--)
  {
    ull x,n,s;
    cin>>x>>n>>s;

    while(x<=n)
    {
      if(x%s==0)
      {
        cout<<x<<"\n";
        x+=s;
        continue;
      }
      x++;
    }
    printf("\n");
  }
	return 0;
}
//প্রবলেম - 34 [৫২ সমস্যা বই] বিভাজনসাধ্য-২
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(){
  int t;
  cin>>t;
  while(t--)
  {
    ull x,n,s;
    cin>>x>>n>>s;
    ull q=x*n;
    ull l=q;
    ull ans=0;
    for(int j=q;j<=s;j++)
    {

      ans+=l;
      if(ans>s) break;
      cout<<ans<<"\n";
    }
   if(t!=0)printf("\n");
  }
	return 0;
}
// প্রবলেম - 35 [৫২ সমস্যা বই] বৃত্তের বাইরে
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

bool isInside(double circle_x, double circle_y,double rad, double x, double y)
{
    if ((x - circle_x) * (x - circle_x) +(y - circle_y) * (y - circle_y) <= rad * rad)
        return true;
    else
        return false;
}
int main(int ab_ohab, char const *abohab[]){
  int n;
  cin>>n;
  while(n--)
  {
    double xc,yc,r,x,y;
    cin>>xc>>yc>>r>>x>>y;
    if(isInside(xc,yc,r,x,y)) cout<<"The point is inside the circle\n";
    else cout<<"The point is not inside the circle\n";

  }

	return 0;
}
প্রবলেম - 36 [৫২ সমস্যা বই] সংখ্যা বিপর্যয়
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(){
  int n;
  cin>>n;
  while(n--)
  {
    string s;
    cin>>s;
    reverse(s.begin(), s.end());
    cout<<s<<"\n";
  }
	return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long N, rev = 0, div;
        cin >> N;
        while(N != 0)
        {
            rev = rev * 10;
            rev = rev + N % 10;
            N = N / 10;
        }
        cout << rev << endl;

    }
        return 0;
}
// প্রবলেম - 37 [৫২ সমস্যা বই] শব্দ সাজানো
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n;
  cin>>n;
  map<string,int>v;
  for(int i=0;i<n;i++) {
    string s;
    cin>>s;
    v[s]++;
  }
  for(auto u:v) cout<<u.first<<"\n";
	return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
        int i, j, n;
        scanf("%d", &n);
        char ara[n][100];
        char temp[100];
        for(i = 0; i < n; i++) {
            scanf(" %[^\n]", &ara[i]);
        }
        //printf("\n");
        for(i = 0; i < n; i++) {
            for(j = i; j < n; j++) {
                if(strcmp(ara[i], ara[j]) > 0) {
                    strcpy(temp, ara[i]);
                    strcpy(ara[i], ara[j]);
                    strcpy(ara[j], temp);
                }
            }
            printf("%s\n", ara[i]);
        }

    return 0;
}
প্রবলেম - 38 [৫২ সমস্যা বই] হীরক রাজ্য
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(){
  int n;
  cin>>n;
  while(n--)
  {
    int a,b;
    cin>>a>>b;
    for(int j=1;j<=a;j++)
    {
      for(int k=1;k<=j;k++)
      {
        cout<<b;
      }
      cout<<"\n";
    }
    for(int j=a-1;j>=1;j--)
    {
      for(int k=1;k<=j;k++)
      {
        cout<<b<<" ";
      }
      cout<<"\n";
    }
    cout<<"\n";
  }
	return 0;
}
//প্রবলেম - 38 [৫২ সমস্যা বই] হীরক রাজ্য
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
  int n;
  cin>>n;
  while (n--) {
    string s;
    cin>>s;
    string k=s;
    reverse(s.begin(), s.end());
    if(k==s) cout<<"Yes! It is Palindrome!\n";
    else cout<<"Sorry! It is not Palindrome!\n";
  }
	return 0;
}
//প্রবলেম - 40 [৫২ সমস্যা বই] ধারার যোগফল - ১
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
  int n;
  cin>>n;
  while(n--)
  {
    int x,k;
    cin>>x>>k;
    long long result = 0;
    for (int j = 0; j <= k; j++)
    {
      result += pow(x, j);
    }
    printf("Result = %lld\n", result);
  }
	return 0;
}
// প্রবলেম - 41 [৫২ সমস্যা বই] ধারার যোগফল-২
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
  int a;
  cin>>a;
  while(a--)
  {
    double num;
    cin>>num;
    double res = 0, fact = 1;
    for (int i = 1; i <= num; i++) {
      fact = fact * i;
      res = res + (i / fact);
    }
    printf("%.4lf\n",res);
  }
	return 0;
}
[৫২ সমস্যা বই] ধারার যোগফল - ৩
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
    int a;
    cin>>a;
    while(a--)
    {
      int num;
      cin>>num;
      for(int i=num;i>=0;i--)
      {
        if (i == 0)
           {
               printf("1\n");
           }
           else if (i == 1)
           {
               printf("2 + ");
           }
           else
           {
               printf("2^%d + ", i);
           }
        // cout<<"2^"<<i;
        // cout<<" + ";
      }
      //cout<<2<<" + "<<1<<endl;
    }
	return 0;
}
//প্রবলেম - 43 [৫২ সমস্যা বই] হিসাব কিতাব not submited
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
    int a;
    cin>>a;
    while(a--)
    {
      int p,q,c;
      cin>>p>>q>>c;
      ull temp=1;
      for (int i = 1; i <=q; i++) {
        temp=(temp*p)%c;
      }
      //int res=temp%c;
      printf("Result = %d\n",temp);
    }
	return 0;
}
/ প্রবলেম - 46 [৫২ সমস্যা বই] ত্রিভুজের ক্ষেত্রফল
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
    int n;
    cin>>n;
    int i;
    for (i = 0; i < n; i++)
    {
        double a, b, c, s;
        cin>>a>>b>>c;
        s = (a + b + c) / 2;
        s = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area = %0.3lf\n", s);
    }
	return 0;
}
// প্রবলেম - 47 [৫২ সমস্যা বই] অ্যারের জোট
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

//int arr1[2000],arr2[2000],arr3[3000];
int main(int ab_ohab, char const *abohab[]){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int a;
  cin>>a;
  while (a--) {
    int b;
    cin>>b;
    int arr1[b];
    for (int j = 0; j < b; j++)
    {
      cin>>arr1[j];
    }
    int c;
    cin>>c;
    int arr2[c];
    for (int k = 0; k < c; k++)
    {
      cin>>arr2[k];
    }
    int arr3[b+c];
    merge(arr1,arr1+b,arr2,arr2+c,arr3);
    int len=b+c;
    sort(arr3,arr3+len);
    for (int i = 0; i < len; i++)
        {
          if (i != (b + c) - 1) cout << arr3[i] << " ";
          else cout << arr3[i];
        }
        cout << endl;
  }
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int arr[10000000];
int main(int ab_ohab, char const *abohab[]){
  // ios::sync_with_stdio(false);
  // cin.tie(0);
  // cout.tie(0);
  int a;
  cin>>a;
  while (a--) {
    int b;
    cin>>b;
    for (int j = 0; j < b; j++)
    {
      cin>>arr[j];
    }
    int c;
    cin>>c;
    for (int k = b; k < c+b; k++)
    {
      cin>>arr[k];
    }
    sort(arr,arr+(b+c));
    for (int i = 0; i < b+c; i++)
    {
      if (i != (b + c) - 1) cout << arr[i] << " ";
      else cout << arr[i];
    }
    cout << endl;
  }
	return 0;
}
// প্রবলেম - 49 [৫২ সমস্যা বই] মৌলিক কী না
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

bool is_prime(ull x)
{
    ull i;
    for(i=2; i<=sqrt(x); i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    ull n;
		cin>>n;
    for( ull i=0; i<n; i++)
    {
        ull a;
				cin>>a;
        if(is_prime(a)) cout<<a<<" is a prime"<<endl;
        else cout<<a<<" is not a prime"<<endl;
        //cout<<cnt<<"\n";
    }
    return 0;
}
//প্রবলেম - 50 [৫২ সমস্যা বই] লেফট-রাইট
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n;
  cin>>n;
  while(n--)
  {
    string s;
    cin>>s;
    for(int i = 0; i < s.size(); i++)
    {
      if(s[i]=='R') s[i]=s[i+1];
      if(s[i]=='L') s[i]=s[i-1];
    }
    cout<<s<<endl;
  }
	return 0;
}
