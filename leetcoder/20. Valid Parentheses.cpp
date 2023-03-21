class Solution {
  public:
    bool isValid(string s) {
    stack < char > v;
      for (int i = 0; i < s.size(); i++) {
        if (v.empty()) {
          v.push(s[i]);
        }
        else if (v.top() == '(' && s[i] == ')') {
          v.pop();
        }
        else if (v.top() == '{' && s[i] == '}') {
          v.pop();
        }
        else if (v.top() == '[' && s[i] == ']') {
          v.pop();
        }
        else {
          v.push(s[i]);
        }
      }
      if (v.empty()) return true;
      else return false;

    }
};
