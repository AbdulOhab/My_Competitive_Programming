// { Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);

stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}// } Driver Code Ends


void push(stack<int>& s, int a){
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	return n==s.size();
}

bool isEmpty(stack<int>& s){
	return s.empty();
}

int pop(stack<int>& s){
	s.pop();
}

int getMin(stack<int>& s){
  int min = s.top();
  while(!s.empty()
  {
    if(s.top() < min)
    min = s.top();
    s.pop();
  }
  return min;
}
