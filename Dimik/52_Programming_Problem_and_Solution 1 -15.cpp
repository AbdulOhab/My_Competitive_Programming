
//জোড়-বিজোড়-১ Even Odd
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}
//জোড়-বিজোড়-২ Even Odd
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,b;
    char a[101];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        cin>>a;
        b=strlen(a);
        if(a[b-1]%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}
//অধোগামী সংখ্যা loop
#include<cstdio>
#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i=999; i>=0; i--)
    {
        printf("%d\t",i+1);

        if(i%5==0)

        {
            printf("\n");
        }
    }
    return 0;
}
//ভাজক Divisor
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int t;
        scanf("%d",&t);
        printf("Case %d:",i);

        for(int j=1; j<=t; j++)
        {
            if(t%j==0)
            {
                printf(" %d",j);
            }
        }
        printf("\n");
    }
    return 0;
}
//বাক্স-১ loop StarPrint
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    int t;
    scanf("%d", &t);
    for (int j = 0; j < t; j++) {
      for (int k = 0; k < t; k++) {
        printf("*");
      }
      printf("\n");
    }
    if (i != n) {
      printf("\n");
    }
  }
  return 0;
}
//যোগফল নির্ণয় String Sum
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        string s;
        int sum = 0, u = 0, v = 0;

        cin >> s;
        int len = s.size();

        char Num1 = s[0];
        char Num2 = s[len - 1];

        u = Num1 - '0';
        v = Num2 - '0';

        sum = u + v;
        cout << "Sum = " << sum << endl;
    }
    return 0;
}
//সংখ্যা গণনা Space Print
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string str;
        getline(cin, str);
        cin.ignore();
        int space = 0;
        for (int i = 0; i < str.size() ; i++)
        {
            if (str[i] == ' ' && str[i+1] != ' ')
            {
                space++;
            }
        }
        cout << space+1<< endl;
    }
    return 0;
}
//ছোট থেকে বড় sort
#include<bits/stdc++.h>
using namespace std;
int arr[3];
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {

        for(int i = 0; i < 3; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+3);
        cout<<"Case"<<" "<<i<<":";
        for(int i = 0; i < 3; i++)
        {
            cout<<" "<<arr[i];
        }
        cout<<endl;
    }
    return 0;
}
//পূর্ণবর্গ সংখ্যা sqrt cill floor
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int num;
        cin>>num;
        int aq_root=sqrt(num);
        //doubel aq_root=sqrt(num);
        //if(ceil(aq_root) == floor(aq_root) )
        if(aq_root * aq_root == num)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
//রান রেট - ১ Count Problem 1
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        float num1,num2,num3;
        cin>>num1>>num2>>num3;

        double over=num3/6;
        double over_runhar=num2/(50-over);

        double knkhito_runhar=(num1-num2+1)/over;
        if(num2>num1) knkhito_runhar=0;
        printf("%.2f %.2f\n",over_runhar, knkhito_runhar);
    }
    return 0;
}
//গৌণিক / ফ্যাক্টরিয়াল Factorial
#include<bits/stdc++.h>
using namespace std;
long long int Factorial(long long int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*Factorial(n-1);
    }
}
int main()
{
    int t;
    cin >> t;
    for(auto i=1; i<=t; i++)
    {
        long long int num1,num2,num3;
        cin>>num1;
        cout<<Factorial(num1)<<"\n";
        // long long int f=1;
        // for(long long int i=2;i<=num1;i++)
        // {
        //   f=f*i;
        // }
        // cout<<f<<"\n";
    }
    return 0;
}
//ফ্যাক্টরিয়াল 100
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(auto i=1; i<=t; i++)
    {
        long long int num1,num2,num3;
        cin>>num1;
        long long int f=1;
        for(long long int i=2;i<=num1;i++)
        {
          f=f*i;
        }
        int count=0;
        while(f>0)
        {
          if(f%10==0) count++;
          else break;
          f=f/10;
        }
        cout<<count<<"\n";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,j,c=0,o=1;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        int ans = 0;

        while(a[i] > 0)
        {
            ans += a[i]/5;

            a[i]/=5;
        }
        cout << ans << endl;

    }
    return 0;
}
//টমি মিয়ার প্রোবাবিলিটি  Not solve/ Only test visiable test case working this pogramming
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(){
      ios::sync_with_stdio(false);
      cin.tie(0);
      cout.tie(0);
      int n;
      cin >> n;
      while (n--)
      {
        string s;
        char c;
        cin>>c;
        getline(cin,s);
        s=c+s;
          int space = 0;
          for (int i = 0; i < s.size() ; i++)
          {
              if (s[i] == ' ')
              {
                  space++;
              }
          }
          int length=space+1;
          cout <<"1/"<<length*space<< endl;
      }
      return 0;
}
//প্রবলেম - 14  [৫২ সমস্যা বই] অক্ষরের ঘনঘটা map problem
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(){
      ios::sync_with_stdio(false);
      cin.tie(0);
      cout.tie(0);
      int n;
      cin >> n;
      while (n--)
      {
        string s;
        char c;
        cin>>c;
        getline(cin,s);
        s=c+s;
        char peakd;
        cin>>peakd;
        map<char,int>v;
        for(int i=0;i<s.size();i++)
        {
          v[s[i]]++;
        }
        bool t=false;
        for(auto u: v)
           {
             if(u.first==peakd){
             //cout<<u.first<<"  "<<u.second<<endl;
             cout<<"Occurrence of \'";
             cout<<peakd<<"\' in \'";
             cout<<s<<"\' = "<<u.second<<"\n";
             t=true;
             break;
           }
           }
      if(t){}
      else{
      cout<<"\'"<<peakd<<"\' is not present"<<"\n";}
      }
      return 0;
}
//প্রবলেম - 15 [৫২ সমস্যা বই] অক্ষর গণনা map problem;
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(){
      ios::sync_with_stdio(false);
      cin.tie(0);
      cout.tie(0);
      int n;
      cin >> n;
      while (n--)
      {
        string s;
        char c;
        cin>>c;
        getline(cin,s);
        s=c+s;
        map<char,int>v;
        for(int i=0;i<s.size();i++)
        {
          v[s[i]]++;
        }
        for(auto u: v)
           {
             cout<<u.first<<" = "<<u.second<<"\n";
           }
           if(n != 0){
               cout << endl;
           }
      }
      return 0;
}
//2nd slolution
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int tests, count = 1;
    string cases;
    cin >> tests;
    while (tests--)
    {
        cin.ignore();
        cin >> cases;
        sort(cases.begin(), cases.end());
        for(int i = 0; i < cases.size(); i++){
            if(cases[i] == cases[i + 1]){
                count++;
            }
            else if(count > 1){
                cout << cases[i] << " = " << count << endl;
                count = 1;
            }
            else{
                count = 1;
                cout << cases[i] << " = " << count << endl;
            }
        }
        if(tests != 0){
            cout << endl;
        }
    }

    return 0;
}
