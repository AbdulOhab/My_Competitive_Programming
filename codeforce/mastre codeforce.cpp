#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<time.h>
using namespace std;
typedef long long ll;

/*
										string task
int main()
{
	int i = 0, j = 0;
	string a, b = "";
	char c;
	cin >> a;
	while (i < a.size())
	{
		c = a[i];
		a[i] = tolower(c);
		i++;

	}
	for (i = 0; i < a.size(); i++)
	{
		if (a[i] !='a' && a[i] !='o' && a[i] != 'i' && a[i] != 'u' && a[i] != 'e' && a[i] != 'y')
			b += a[i];
	}
	for (i=0;i<b.size();i++)
	cout <<"."<< b[i] ;
}
*/
/*
									team
int main()
{
	int n, a[3], c = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j=0;j<3;j++)
			cin >> a[j];
		if ((a[0] == 1 && a[1] == 1 && a[2] == 1) || (a[0] == 1 && a[1] == 1) || (a[1] == 1 && a[2] == 1) || (a[0] == 1 && a[2] == 1))
			c++;
	}
	cout << c;
	c = 0;
}
*/
/*
											football
int main()
{
	int c=0;
	string a;
	cin >> a;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == a[i + 1])
			c++;
		else
			c = 0;
		if (c == 6)
			break;
	}
	if (c >= 6)
		cout << "YES";
	else
		cout << "NO";
	return 10;
}
*/
//					taxi
/*
int main()
{
	//freopen("ACM.in", "r", stdin);
	ll a[10] = { 0 }, t, n, taxi = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >>t;
		a[t]++;
	}
	taxi += a[4];
	taxi += a[2] / 2;
	taxi += a[3];
	a[1] -= a[3];
	if (a[2] % 2)
		taxi++, a[1] -= 2;
	if (a[1] < 0)
		a[1] = 0;
	taxi =taxi+ ceil(a[1] / 4.00);
	cout <<taxi;
}
*/
/*
									Petya and Strings
int main()
{
	//freopen("ACM.in", "r", stdin);
	int cnta=0, cntb=0;
	string a,b;
	cin >> a>>b;
	for (int i = 0; i < a.size(); i++)
	{
		a[i] = tolower(a[i]);
		cnta +=  a[i];
		b[i] = tolower(b[i]);
		cntb += b[i];
		if (cnta < cntb)
		{
			cout << "-1"; break;
		}
		if (cnta > cntb)
		{
			cout << "1"; break;
		}
	}
	if (cnta == cntb)
	{
		cout << "0";
	}
	return 0;
}
*/
//													Helpful Maths
/*
int main()
{
	//freopen("ACM.in", "r", stdin);
	ll a[10] = { 0 }, j = 0, i = 0, p;
	string b,c[200];
	cin >> b;
	for (int i = 0; i < b.size(); i++)
	{
		if (b[i] == '1')
			a[1]++;
		if (b[i] == '2')
			a[2]++;
		if (b[i] == '3')
			a[3]++;
	}
	p = b.size();
	for (int t=0;t<p-1;t++)
		c[2 * t + 1] = '+';
	while (a[1] > 0)
	{
		c[2 * i] = '1'; a[1]--; i++;
	}
	while (a[2] > 0)
	{
		c[2 * i] = '2'; a[2]--; i++;
	}
	while (a[3] > 0)
	{
		c[2 * i] = '3'; a[3]--; i++;
	}
	for (j = 0; j < b.size(); j++)
		cout << c[j];
	return 0;
}
*/
//										tram
/*
int main()
{
	//freopen("ACM.in", "r", stdin);
	ll max = 0, a[1015] = { 0 }, passenger = 0, n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> a[i + 1];
		passenger += a[i + 1] - a[i];
		if (passenger > max)
			max = passenger;
	}
	cout << max;
	return 0;
}
*/
//										Stones on the Table
/*
int main()
{
	//freopen("ACM.in", "r", stdin);
	ll n,cnt=0;
	string s;
	cin >> n>>s ;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == s[i + 1])
			cnt++;
	}

	cout << cnt ;
	return 0;
}
*/
//									cAPS lOCK
/*
int main()
{
	//freopen("ACM.in", "r", stdin);
	int cnt = 0, cnt1 = 0;
	string s;
	cin >> s;
	if (s.size() == 1)
	{
		if (islower(s[0]))
		{
			s[0] = toupper(s[0]);
			cout << s;
			return 0;
		}
		else
		{
			s[0] = tolower(s[0]);
			cout << s;
			return 0;
		}
	}
	if (islower(s[0]))
		for (int i = 0; i < s.size(); i++)
		{
			if (isupper(s[i]))
				cnt++;
			else
				cnt = 0;
		}
	for (int i = 0; i < s.size(); i++)
	{
		if (isupper(s[i]))
			cnt1++;
		else
			cnt1 = 0;
	}
	if (cnt1 == s.size())
	{
		for (int i =0 ; i < s.size(); i++)
		{
			s[i] = tolower(s[i]);
		}
		cout << s;
		return 0;
	}
	if (cnt == s.size() - 1)
	{
		for (int i = 1; i < s.size(); i++)
		{
			s[0] = toupper(s[0]);
			s[i] = tolower(s[i]);
		}
		cout << s;
		return 0;
	}
	else
		cout << s;
	return 0;
}
*/
//										 HQ9+
/*
int main()
{
	//freopen("ACM.in", "r", stdin);
	string a;
	int cnt = 0;
	cin >> a;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == 'H')
			cnt++;
		if (a[i] == 'Q')
			cnt++;
		if (a[i] == '9')
			cnt++;

	}
	if (cnt >= 1)
	{
		cout << "YES";
		return 0;
	}
	cout << "NO";
	return 0;
}
*/
//								BOY OR GIRL
/*
int main()
{
	//freopen("ACM.in", "r", stdin);
	string a;
	set <char> aa;
	cin >> a;
	for (int i = 0; i < a.size(); i++)
	{
		aa.insert(a[i]);
	}
	if (aa.size() % 2 == 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";
	return 0;

}
*/
/*
//													Lucky Division
int main()
{
	//freopen("ACM.in", "r", stdin);
	ll a, r = 0, i = 0,t=0;
	cin >> a;
	if (a % 7 == 0 || a % 4 == 0 || a % 47 == 0 || a % 74 == 0 || a % 44 == 0 || a % 77 == 0 || a % 747 == 0 || a % 474 == 0)
	{
		cout << "YES";
		return 0;
	}
	else
	{
		for (; a > 0;)
		{
			r = a % 10;
			a /= 10;
			i++;
			if (r == 4 || r == 7)
			{
				t++; continue;
			}
		}
		if (i == t)
		{
			cout << "YES"; return 0;
		}
	}
	cout << "NO";
	return 0;
}
*/
//															Twins
/*
int main()
{
	//freopen("ACM.in", "r", stdin);
	ll n, a[105], i = 0, sum = 0, mine = 0,j=0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	sort(a,a+n);
	reverse(a,a+n);
	for (i = 0; i < n; i++)
	{
		if (sum >= mine)
		{
			j++;
			mine += a[i];
			sum -= a[i];
		}

	}
	cout << j;
	return 0;
}
*/
//                                                    chat room
/*
int main()
{
	//freopen("ACM.in", "r", stdin);
	string s;
	int h0 = 0,cntl=0;
	cin >> s;
	for (int i = 0; i <s.size(); i++)
	{
		if (h0 == 0 & (s[i]=='h'||s[i]=='e'))
		{
			if (s[i] == 'h')
				continue;
			h0 = 1;
		}
		else if(h0==0) continue;
		if (h0 == 1 & (s[i] == 'e'|| s[i] == 'l'))
		{
			if (s[i] == 'e')
				continue;
			h0 = 2;
		}
		else if (h0 == 1)
		{
			cout << "NO"; return 0;
		}
		if (h0 == 2 & (s[i] == 'l'|| s[i] == 'o'))
		{
			if (s[i] == 'l')
			{
				cntl++;
				continue;
			}
			h0 = 3;
		}
		else if (h0 == 2)
		{
			cout << "NO"; return 0;
		}
		if (h0 == 3 & s[i] == 'o' & cntl > 1)
		{
			cout << "YES";
			return 0;
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
*/
//														Chat room doroste
/*
int main()
{
	freopen("ACM.in", "r", stdin);
	string s;
	cin >> s;
	int cnt = 0, ind = 0;
	string a =  "hello" ;
	for (int i = 0; i <s.size(); i++)
	{
		if (s[i] == a[ind]) ind++;
		if (ind >= a.size())cnt++, ind = 0;
	}
	s = "";
	if (cnt--)
		s += a;
	if (s == "hello")
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
*/
//											Beautiful Matrix
/*
int main()
{
	//freopen("ACM.in", "r", stdin);
	int a[5][5], b, c;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >>a[i][j];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			if (a[i][j])
			{
				b = abs(i - 2);
				c = abs(j - 2);
			}
	}
	cout << b + c;
	return 0;
}
*/

//															George and Accommodation
/*


int main()
{
	//freopen("ACM.in", "r", stdin);
	ll n, a[110] = { 0 },cnt=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> a[i + 1];
		if (abs(a[i] - a[i + 1])>=2)
			cnt++;
	}
	cout << cnt;

	return 0;
}
*/
//															Nearly Lucky Number
/*
int main()
{
	freopen("ACM.in", "r", stdin);
	ll a, r = 0, i = 0, cnt = 0;
	cin >> a;
	for (; a > 0;)
	{
		r = a % 10;
		a /= 10;
		if (r == 4 || r == 7)
		{
			cnt++;
			continue;
		}
	}
	if (cnt == 4 || cnt == 7)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
*/

//													Beautiful Year
/*
int main()
{
	//freopen("ACM.in", "r",stdin);
	int j, a[6] = { 0 }, t;
	cin >> j;
	j++;
	for( j;j<9999;j++)
		{
			t = j;
			for (int i = 0; i < 4; i++)
			{
				a[i] = t % 10;
				t /= 10;
			}
			if (a[0] != a[1] && a[0] != a[2] && a[0] != a[3] && a[1] != a[2] && a[1] != a[3] && a[2] != a[3])
			{
				cout << j;
				return 0;
			}
		}

}
//														Puzzles

*/
/*
int main()
{
	//freopen("ACM.in", "r", stdin);
	ll a, b, mini = 100000, c[80] = { 0 };
	cin >> a >> b;
	for (int i = 0; i < b; i++)
		cin >> c[i];
	sort(c, c + b);
	for (int i = 0; i < b - a + 1; i++)
		mini = min(mini, c[a - 1 + i] - c[i]);
	cout << mini;
	return 0;
}
*/



//														A. Translation
/**/
int main()
{
	//freopen("ACM.in", "r", stdin);
	string a, b;
	int cnt = 0;
	cin >> a >> b;
	reverse (a.begin(), a.end());
	for (int i = 0; i < b.size(); i++)
	{
		if (b[i] == a[i])cnt++;
		else break;
	}
	if (cnt == a.size())
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
