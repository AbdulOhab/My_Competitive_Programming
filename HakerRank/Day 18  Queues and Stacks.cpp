#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>
#include <string>
#include <vector>
using namespace std;

class Solution {
    //Write your code here
    stack<char> s;
    queue<char> q;
    public:
    void pushCharacter(char i) {
        s.push(i);
    }
    void enqueueCharacter(char i) {
        q.push(i);
    }
    char popCharacter() {
        char temp = s.top();
        s.pop();
        //cout<< temp;
        return temp;
    }

    char dequeueCharacter() {
        char temp = q.front();
        q.pop();
        //cout<<temp;
        return temp;
    }
};
int main() {

    string s;
    getline(cin, s);

    Solution obj;
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;

            break;
        }
    }

    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}
