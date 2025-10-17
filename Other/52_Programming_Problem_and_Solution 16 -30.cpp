//প্রবলেম - 16 [৫২ সমস্যা বই] শব্দ বিপর্যয় stack word reverce Unique Problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
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
        stack<char> st;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] != ' ')
                st.push(s[i]);
            // When we see a space, we print contents
            // of stack.
            else
            {
                while (st.empty() == false)
                {
                    cout << st.top();
                    st.pop();
                }
                cout << " ";
            }
        }
       // Since there may not be space after
       // last word.
        while (st.empty() == false)
        {
            cout << st.top();
            st.pop();
        }
        cout<<"\n";
      }
        return 0;
}
// only one word reverce
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main(){
	char c = 'o'; //initialize c so as to get into while loop
	string s, result = ""; //result holds the resulting string;

	//prompt the user to read the input string
	cout << "enter the string: ";

	while(c != '\n'){
		//cin reads the input string until the first whitespace is encountered
		cin >> s;

		//concatanate the reverse of s into the resulting string with a whitespace
		result += string(s.rbegin(), s.rend()) + " ";

		//if c = '\n' terminate the while loop
		c = getchar();
	}

	//print the resulting string
	cout << "the resulting string is: " << result << endl;
}
//প্রবলেম - 17 [৫২ সমস্যা বই] স্বরবর্ণ গণনা string count
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

bool isVowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' ||x == 'o' || x == 'u' ||
        x == 'A' || x == 'E' || x == 'I' ||x == 'O' || x == 'U' )
    return true;
    else
    return false;
}
int main(int ab_ohab, char const *abohab[])
{
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
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
          if(isVowel(s[i])) cnt++;
        }
        cout<<"Number of vowels = "<<cnt<<"\n";
      }
      return 0;
}
//2nd subission
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int tests, count;
    string cases;
    string vowels = "aeiouAEIOU";
    cin >> tests;
    cin.ignore();
    while(tests--){
        getline(cin, cases);
        count = 0;
        for(int i = 0; i < cases.size(); i++){
            if(vowels.find(cases[i]) != string::npos){
                count++;
            }
        }
        cout << "Number of vowels = " << count << endl;
    }
    return 0;
}
//[৫২ সমস্যা বই] স্বরবর্ণ-ব্যাঞ্জনবর্ণ NOT ACCEPT BUT
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

bool isVowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' ||x == 'o' || x == 'u' ||
        x == 'A' || x == 'E' || x == 'I' ||x == 'O' || x == 'U' )
    return true;
    else
    return false;
}
int main(int ab_ohab, char const *abohab[])
{
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
        string cnt="";
        string cnt1="";
        for(int i=0;i<s.size();i++)
        {
          if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
          if(isVowel(s[i])) cnt1+=s[i];
          else cnt+=s[i];
        }
        }
        cout<<cnt1<<"\n";
        cout<<cnt<<"\n";
      }
      return 0;
}
//প্রবলেম - 19 [৫২ সমস্যা বই] শব্দ গণনা-১
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    int a;
    char s[20000];
    cin>>a;

    for(int i=0; i<a; i++)

    {
        int flag=0;
        scanf(" %[^\n]",&s);
        for(int i=0; s[i] != '\0'; i++)
        {
            if(s[i]==' ')
            {
                flag++;

            }
        }
        cout << "Count = " << flag+ 1 << endl;
    }
    return 0;
}
//প্রবলেম - 20 [৫২ সমস্যা বই] শব্দ গণনা - ২
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    int a;
    char s[20000];
    cin>>a;

    for(int i=0; i<a; i++)

    {
        int flag=0;
        scanf(" %[^\n]",&s);
        for(int i=0; s[i] != '\0'; i++)
        {
            if(s[i]==' ' && s[i+1] != ' ')
            {
                flag++;

            }
        }
        cout << "Count = " << flag+ 1 << endl;
    }
    return 0;
}
//প্রবলেম - 21 [৫২ সমস্যা বই] উল্টে দেখা
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
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin, s);
        reverse(s.begin(),s.end());
        cout<<s<<"\n";
    }
}
//প্রবলেম - 22 [৫২ সমস্যা বই] মৌলিক সংখ্যা Prime or not batter suing sive
#include <bits/stdc++.h>
using namespace std;

int is_prime(int x)
{
    int i;
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
    int n;
		cin>>n;
    for( int i=0; i<n; i++)
    {
        int a,b;
				cin>>a>>b;
        int cnt=0;
        while(a<=b)
        {
            if(a==1 || a==0)
            {
                a++;
                continue;
            }
            cnt+=is_prime(a);
            a++;
        }
        cout<<cnt<<"\n";

    }
    return 0;
}
//প্রবলেম - 23 [৫২ সমস্যা বই] বর্ণমালা থেকে সংখ্যা
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

char str[123];
int main(){
	int n;
	cin>>n;
	while(n--)
	{
		scanf("%s", str);
		int len = strlen(str);
		for (int i = 0; i < len; i++)
		{
			cout<<str[i]-64;
		}
		cout<<'\n';
	}
	return 0;
}
//Shariar Abdullah Nafi solution
int main()
{
    int tests;
    string cases, output, sub;
    cin >> tests;
    while(tests--){
        cin >> cases;
        output = "";
        for(int i = 0; i < cases.size(); i++){
            sub = to_string(cases[i] - 64);
            output += sub;
        }
        cout << output << endl;
    }
    return 0;
}
//প্রবলেম - 24 [৫২ সমস্যা বই] একান্তর উপাদান
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	int n,t;
	cin>>t;
	while(t--)
	{
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<n;j+=2)
	{
		cout<<arr[j];
		if(j<n-2)
		{
			cout<<" ";
		}
	}
	cout<<"\n";
}
	return 0;
}
//প্রবলেম - 25 [৫২ সমস্যা বই] লঘিষ্ঠ সাধারণ গুণিতক
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

ll lcm (ll a, ll b)
{
	return (a*b)/__gcd(a,b);
}
int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		cout<<"LCM = "<<lcm(a,b)<<"\n";
	}
	return 0;
}
//প্রবলেম - 26 [৫২ সমস্যা বই] এলিয়েন গুপী
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        double t;
        cin >> t;
        int cnt=0;
        while(t>1.0)
        {
            t=t/2.0;
            cnt++;
        }
        printf ("%d days\n", cnt);
    }
    return 0;
}
//প্রবলেম - 27 [৫২ সমস্যা বই] আর্মস্ট্রং সংখ্যা
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin >> t;
				int temp=t;
				int sum=0;
				while(temp!=0)
				{
					int rem=temp%10;
					sum+=rem*rem*rem;
			    temp/=10;
				}
				if(t==sum)
            printf("%d is an armstrong number!\n",t);
        else
            printf("%d is not an armstrong number!\n",t);
    }
    return 0;
}
//প্রবলেম - 28 [৫২ সমস্যা বই] এলোমেলো অ্যারে
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int arr1[n];
	copy(arr,arr+n,arr1);
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr1[i])
		{
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}
//প্রবলেম - 29 [৫২ সমস্যা বই] চিহ্ন পরিচয়
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	int n;
	cin>>n;
	while(n--)
	{
		char x;
		cin>>x;
		if(isupper(x)) printf("Uppercase Character\n");
		else if(islower(x)) printf("Lowercase Character\n");
		else if(isdigit(x)) printf("Numerical Digit\n");
		else printf("Special Character\n");
	}
	return 0;
}
//প্রবলেম - 30 [৫২ সমস্যা বই] যোগ্য সংখ্যা - ১
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
		int n;
		cin>>n;
		ull sum=0;
		for(int i=1;i<n;i++)
		{
			if(n%i==0)
			{
				sum=sum+i;
			}
		}
		if(sum==n)
		{
			printf("YES, %d is a perfect number!\n",n);
		}
		else
		{
			printf("NO, %d is not a perfect number!\n",n);
		}
	}
	return 0;
}
