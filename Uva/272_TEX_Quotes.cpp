#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  char s[1024];
  bool first=true;
  while(gets(s))
  {
    int len = strlen(s);
		for (int i = 0; i < len; i++){
      if(s[i]== '"' )
      {
        if(first) printf("``");
        else printf("''");
        first=(!first);
      }
      else printf("%c", s[i]);
    }
    printf("\n");
  }
  return 0;
}
