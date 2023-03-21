#include <stdio.h>

int binary_search(int ara[], int n, int ara_size)
{
    int min, max, mid;

    min = 0;
    max = ara_size - 1;

    while(min <= max)
    {
        mid = min + (max - min) / 2;

        if(ara[mid] == n) {
            return 1;
        } else if(ara[mid] < n) {
            min = mid + 1;
        } else {
            max = mid - 1;
        }
    }

    return 0;
}

int main()
{
    int N, K, i;
    int ones_indexes[65536];
    unsigned int ones_index;

    for(ones_index = 1, i = 0; ones_index <= 2147483647; i++, ones_index += i)
    {
        ones_indexes[i] = ones_index;
    }

    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        scanf("%d", &K);
        printf("%d\n", binary_search(ones_indexes, K, 65536));
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

vector <int> v;

bool binary_search(int first, int last, int n)
{
	if (first > last)
		return false;
	int pos = (first + last)/2;
	if (v[pos] == n)
		return true;
	if (n > v[pos])
		return binary_search(pos + 1, last, n);
	if (n < v[pos])
		return binary_search(first, pos - 1, n);
}

int main ()
{
	v.push_back(1);
	for (int i = 1; i < 65536; i++)
		v.push_back(v[i - 1] + i);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (binary_search(0, 65535, num))
			cout << '1';
		else
			cout << '0';
		cout << " ";
	}
}

