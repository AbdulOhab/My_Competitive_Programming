#include<bits/stdc++.h>
using namespace std;
const int N=1e5+20;
int n,i,a[N];
map <int,int> l,r;
long long ans;
int main()
{
    cin>>n;
    for(i=0; i<n; i++) cin>>a[i], r[a[i]]++;

    sort(a,a+n);
    for(i=0; i<n; i++)
    {
        r[a[i]]--;
        if(a[i]==a[1])
            ans+=1LL*l[a[0]]*r[a[2]];
        l[a[i]]++;
    }
}



#include<bits/stdc++.h>
using namespace std;
#define ll long long int
    int main()
    {
        ll n,i;
        cin>>n;
        ll a[n+1];
        for(i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        ll c = 0;
        for(i=0; i<n; i++)
        {
            if(a[i]==a[2])
                c++;
        }
        if(a[0]==a[2])
            cout<<(c*(c-1)*(c-2))/6;
        else if(a[1]==a[2])
            cout<<(c*(c-1)/2);
        else
            cout<<c;
    }
#include<bits/stdc++.h>
    using namespace std;
    long long n,a[100009],ret=1;
    map<long long,long long>mp;
    int main()
    {
        cin>>n;
        for(int i=0; i<n; cin>>a[i++]);
        sort(a,a+n);
        for(int i=0; i<3; i++)
        {
            long long cnt=0;
            for(int j=0; j<n; j++)if(a[i]==a[j])cnt++;
            ret*=(cnt-mp[a[i]]);
            mp[a[i]]++;
            ret/=mp[a[i]];
        }
        return cout<<ret<<"\n",0;
    }
#include<bits/stdc++.h>

    using namespace std;

    const int N=1e5+20;

    int n,i,a[N];

    map <int,int> l,r;

    long long ans;

    int main()
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i]
               r[a[i]]++;
        }

        sort(a,a+n);
        for(i=0; i<n; i++)
        {
            r[a[i]]--;
            if(a[i]==a[1]) ans+=1LL*l[a[0]]*r[a[2]];
            l[a[i]]++;
        }

        cout<<ans;
    }
