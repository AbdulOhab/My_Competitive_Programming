#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr=new int[n+1]{0};
    for(int i=1;i<n;i++){
        int t;
        cin>>t;
        arr[t]++;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==0){
            cout<<i;
            return 0;
        }
    }

    return 0;
}
