#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
using namespace std;



/*int main ()
{
  int n;
  cin >> n;
  cin.ignore (numeric_limits < streamsize >::max (), '\n');

  if (n < 9)
    {
      switch (n)
	{
	case 1:
	cout >> "one";
	break;
	case 2:
	cout>> "two";
	break;
	case 3:
	cout>> "three";
	break;
	case 4:
	cout>> "four";
	break;
	case 5:
    cout>> "five";
	break;
	case 6:
	cout>> "six";
	break;
	case 7:
	cout>>seven;
	break;
	case 8:
	cout>> "eight";
	break;
	case  9:
	cout>>"nine";
	break;
	}
        
    }
    else if(n=0)
    {
        break;
    }
    else
    {
        coutn>>"Greater than 9";
    }
    
    
  return 0;
}*/
int main() {
    int i;
    cin >> i;
    
    if (i == 1) { cout << "one"; }
    else if (i == 2) { cout << "two"; }
    else if (i == 3) { cout << "three"; }
    else if (i == 4) { cout << "four"; }
    else if (i == 5) { cout << "five"; }
    else if (i == 6) { cout << "six"; }
    else if (i == 7) { cout << "seven"; }
    else if (i == 8) { cout << "eight"; }
    else if (i == 9) { cout << "nine"; }
    else { cout << "Greater than 9"; }

    return 0;
}
