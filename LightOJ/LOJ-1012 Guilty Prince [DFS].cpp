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

const int mx= 30;
int cnt;
char arr[mx][mx];
int m,n;

int dx[] = { +1, -1, 0, 0 }; //+x.upper,-x.lower,0,0;
int dy[] = { 0, 0, -1, +1 }; //0,0,y+.left,-y.right;

bool visited[mx][mx];

void dfs(int x, int y)
{
	visited[x][y] = 1;
  cnt++;
	for(int i = 0; i < 4; i++)
	{
    int x1 = x + dx[i];
    int y1 = y + dy[i];
		//if(x1 >= 1 and x1 <= n and y1 >= 1 and y1 <= m and !arr[i][y] and arr[x1][y1] != '#')
    if ( x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= m && arr[x1][y1] == '.' && visited[x1][y1] == 0 )
		{
			dfs(x1,y1);
		}
	}
}

int main(int argc, char const *argv[])
{
   optimize();
   int T;
   cin>>T;
   for(int it = 1; it<= T; it++)
   {
     memset(visited,0, sizeof(visited));
     cnt=0;
     int x,y;
     cin>>m>>n;

     for(int i = 1; i <= n; i++)
     {
       for(int j = 1; j<=m; j++)
       {
         cin>>arr[i][j];

         if(arr[i][j] == '@')
         {
           x = i;
           y = j;
         }
       }
     }
     dfs(x,y);
     cout<<"Case " <<it <<": "<<cnt<<endl;
   }
   return 0;
}
