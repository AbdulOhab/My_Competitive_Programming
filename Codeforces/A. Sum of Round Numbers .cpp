#include <iostream>
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,t,a,b,c;
	int count = 0;

	cin >> t;
  //t=1;
	while(t--)
	{
		cin>>n;
    //n=500;
		b = 1;
		m = n;
		count = 0;
		while (m != 0)
		{
			a = m % 10;
			if(a!=0)
			{
				count++;
			}
			m = m / 10;
		}
		cout << count << endl;

		while (n != 0)
		{
			a = n % 10;
			if(a==0)
			{
				b = b * 10;
				n = n / 10;
			}
			else
			{
				c = a * b;
				cout << c << " ";
				n = n - a;
			}
			count++;
		}
		cout << endl;
	}

	return 0;
}
