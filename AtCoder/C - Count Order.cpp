#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    vector<int>v;
    vector<int>x;
    int b;

    cin>>b;

    vector<int> temp;
    for(int  i = 0 ; i <b ; i++){
            temp.push_back(i);}

    for(int  j=0; j<b; j++)
    {
        int c;
        cin>>c;
        v.push_back(c);
    }


    for(int  j=0; j<b; j++)
    {
        int d;
        cin>>d;
        x.push_back(d);
    }


    int a=-1 ;
    int f=-1 ;
    int cont = 0;
    do
    {
        cont++;
        if(v == temp)a = cont;
        if(x == temp)f = cont;
    }
    while(next_permutation(temp.begin(),temp.end()));

    cout << abs(f-a) << '\n';
    return 0;
}

#include <bits/stdc++.h>


using namespace std;



int32_t main()
{

    int N;

    cin >> N;

    vector<int> temp;

    for(int i = 1 ; i <= N ; i++)temp.push_back(i);

    vector<int> v1, v2;

	for(int i = 0 ; i < N ; i++)
	{
		int n;
		cin >> n;
		v1.push_back(n);
	}

	for(int i = 0 ; i < N ; i++)
	{
		int n;
		cin >> n;
		v2.push_back(n);
	}

	int a = -1, b = -1;

	int cont = 0;

	do
	{
		cont++;
		if(v1 == temp)a = cont;
		if(v2 == temp)b = cont;
	}
	while(next_permutation(temp.begin(),temp.end()));

	cout << abs(b-a) << '\n';

    return 0;
}
