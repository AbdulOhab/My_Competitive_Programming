#include<bits/stdc++.h>
using namespace std;

//int main()
//{
//    int a,b;
//    cin >> a >> b;
//    int c;
//    if(b < 10)
//        c = a * 10 + b;
//    else if(b < 100)
//        c = a * 100 + b;
//    else
//        c = a * 1000 + b;
//
//    for(int i = 1; i < c; i++)
//    {
//        if(c == i * i)
//        {
//            cout << "Yes" << endl;
//            return 0;
//        }
//    }
//    cout << "No" << endl;
//    return 0;
//}
int main()
{
    string a, b;
    cin >> a >> b;
    int c = stoi(a+b);
    //cout<<c<<"\n"<<(int)sqrt(c)*(int)sqrt(c<<endl;
    if((int)sqrt(c)*(int)sqrt(c) == c)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}
