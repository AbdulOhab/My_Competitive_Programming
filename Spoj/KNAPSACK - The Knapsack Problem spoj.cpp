#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int max(int x, int y)
{
    return (x > y) ? x : y;
}
int knapSack(int W, int w[], int v[], int n)
{
    int i, wt;
    int K[n + 1][W + 1];
    for (i = 0; i <= n; i++)
    {
        for (wt = 0; wt <= W; wt++)
        {
            if (i == 0 || wt == 0)
                K[i][wt] = 0;
            else if (w[i - 1] <= wt)
                K[i][wt] = max(v[i - 1] + K[i - 1][wt - w[i - 1]], K[i - 1][wt]);
            else
                K[i][wt] = K[i - 1][wt];
        }
    }
    return K[n][W];
}
int main()
{
    int n, W;
    cin >>W>>n;
    int v[n], w[n];
    for (int i = 0; i < n; i++)
    {
        cin >>w[i]>>v[i];
    }
    cout << knapSack(W, w, v, n);
    return 0;
}

    #include<iostream>
    using namespace std;
    int reverse(int n){
     int r=0;
     while (n != 0)
       {
          r = r * 10;
          r= r + n%10;
          n = n/10;
       }
     return r;
    }
    int main()
    {
      int n;
      cin>>n;
      while(n--){
       int a,b;
       cin>>a>>b;
       a=reverse(a);
       b=reverse(b);
       cout<<reverse(a+b)<<"\n";
      }

      return 0;
    }
