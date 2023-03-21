#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
const double PI = acos(-1);
const double eps = 1e-9;
#define MOD 1000000007
#define mem(a,val) memset(a,val,sizeof(a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define infile() freopen("D:/Coding_CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding_CP/Abdul_Ohab_OutputFile.txt", "w", stdout);

int maxProfit(int arr[], int n)
{

    // Sorting the array
    sort(arr, arr + n, greater<int>());

    // Variable to store the answer
    int ans = 0;

    // Iterating through the array
    for(int i = 0; i < n; i++)
    {

       // If the value is greater than 0
       if ((arr[i] - (1 * i)) > 0)
           ans += (arr[i] - (1 * i));

       // If the value becomes 0
       // then break the loop because
       // all the weights after this

     // index will be 0
       if ((arr[i] - (1 * i)) == 0)
           break;
    }

    // Print profit
    return ans;
}

int main(int argc, char const *argv[])
{
   optimize();
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
   }
   cout<<maxProfit(arr,n);
   return 0;
}
