class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> v;
        //v.push(s[0]);
        for(int i=0;i<s.size();i++)
        {
            if(v.empty()) v.push(s[i]);
            else
            {
                if(v.top()==s[i]) v.pop();
                else
                {
                    vs.push(s[i]);
                }
            }

        }
        string t="";
        while (!v.empty()) {
            t += v.top();
            v.pop();
        }
        reverse ( t.begin(), t.end() );
        return t;
    }
};
