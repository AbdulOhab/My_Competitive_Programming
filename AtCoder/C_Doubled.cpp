#include <iostream>
#include <string>
using namespace std;
using ll = long long;
int main(){
    ll s;
    cin >> s;
    for(ll i = 1; ; i++) if(stoll(to_string(i) + to_string(i)) > s){
        cout << i - 1 << endl;
        return 0;
    }
}
