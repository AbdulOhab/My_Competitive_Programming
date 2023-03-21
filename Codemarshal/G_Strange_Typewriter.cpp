#include<bits/stdc++.h>
using namespace std;
int ct=1;
int comp(const string& first,const string& second)
{
  return first.size() > second.size();
}

int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        int r,rr,tp=0;
        cin>>r;
        rr=r;
        vector<string>st;
        string given;

        while(r>0)
        {
            string s;
            cin>>s;
            st.push_back(s);
            r--;
        }
        sort(st.begin(),st.end(),comp);
        cin>>given;
        for(int i=0;i<rr;i++)
        {

            size_t pos = std::string::npos;
            while ((pos  = given.find(st[i]) )!= std::string::npos)
             {
                given.erase(pos, st[i].length());
             }
            if(given.empty())
            {
                tp++;
                cout << "Case "<< ct<<": " << i+1 << endl;
                ct++;
                break;
            }


        }
        if(tp == 0)
        {
            cout << "Case "<< ct<<": " <<  "impossible" <<endl;
            ct++;
        }
        n--;
    }
    return 0;
}
