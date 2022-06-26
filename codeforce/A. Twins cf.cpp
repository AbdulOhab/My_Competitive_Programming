#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    string a;
    cin>>a;
    int len=a.size();
    for(int i=0; i<len; i++)
    {
        if (a[i]>='1' && a[i]<='3')
        {
            v.push_back(a[i]-'0');
        }
    }
    sort(v.begin(),v.end());
    cout<<v[0];
    for(int i=1; i<v.size(); i++)
    {
        cout<<"+"<<v[i];
    }
    cout<<endl;
    return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//
//
//    int arr[101];
//    int a = 0,b;
//    string s;
//    cin >> s;
//   // cout << s;
//   // cout << "\n" ;
//    b=s.length();
//    int     d = b;
//   // cout << b << endl;
//    //cout << "\n" ;
//    //cout << s[0];
//    //cout << "\n" ;
//    for(int i=0;i<b;i++)
//    {
//
//        if(s[i] == 43 )
//
//        {
//            //cout << s[i] << endl;
//            d--;
//           continue;
//        }
//        else
//        {
//            arr[a] = s[i] - '0';
//            a++;
//        }
//
//    }
//    sort(arr,arr+d);
//    for(int j=0;j<d;j++)
//    {
//        cout <<arr[j] ;
//        if(j != d-1)
//        {
//            cout <<"+";
//        }
//    }
//    cout << "\n";
//    return 0;
//}
