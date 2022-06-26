#include <cstdio>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

nt main() {
    stack <int> s;
    int n,x,t;
    cin>>n;
    while(n--){
        cin>>t;
        switch(t){
            case 1:
                cin>>x;
                if(s.empty())
                    s.push(x);
                else
                    s.push(max(x,s.top()));
                 break;
            case 2:
                 if (!s.empty())
                     s.pop();
                break;
            case 3:
                cout<<s.top()<<endl;
                break;
            default:
                break;
        }

    }
    return 0;
}

