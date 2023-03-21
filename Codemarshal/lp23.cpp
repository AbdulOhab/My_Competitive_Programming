#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
const double PI = acos(-1);
const double eps = 1e-9;
#define MOD 1000000007
#define mem(a,val) memset(a,val,sizeof(a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int ap = 0;
int am = 0;
int abp = 0;
int abm = 0;
int bp = 0;
int bm = 0;
int op = 0;
int om = 0;

int Check_BloodGroup(string T){
  if(T == "A+") return 1;
  else if(T == "A-") return 2;
  else if(T == "AB+") return 3;
  else if(T == "AB-") return 4;
  else if(T == "B+") return 5;
  else if(T == "B-") return 6;
  else if(T == "O+") return 7;
  else if(T == "O-") return 8;
}

void inc_Blood(int n){
  if(n == 1) ap++;
  else if(n == 2) am++;
  else if(n == 3) abp++;
  else if(n == 4) abm++;
  else if(n == 5) bp++;
  else if(n == 6) bm++;
  else if(n == 7) op++;
  else  om++;
}

void dec_Blood(int n){
  if(n == 1) ap--;
  else if(n == 2) am--;
  else if(n == 3) abp--;
  else if(n == 4) abm--;
  else if(n == 5) bp--;
  else if(n == 6) bm--;
  else if(n == 7) op--;
  else if(n == 8) om--;
}


vector<string> vEmail;
std::vector<string>::iterator vEmailit;
vector<string> vAge;
vector<string> vBloodGroup;
set<string> v1;

void solve() {

  int T;
  string s1;
  string s2; //email
  string s3;
  string s4;
  string s5; //subtring of s3




  cin >> T;
  for (int i = 0; i < T; i++) {
    cin >> s1 >> s2 >> s3 >> s4;
    s5 = s3.substr(6, 9);
    int ns5;
    ns5 = stoi(s5);

    if (s2.size() <= 25 && (ns5 >= 1000 && ns5 <= 2023)) {
     int Check_blood;
      // std::find function call
      vEmailit = std::find(vEmail.begin(), vEmail.end(), s2);
      if (vEmailit != vEmail.end()) {
        int position = vEmailit - vEmail.begin();
        vAge[position] = s5;
        Check_blood = Check_BloodGroup(vBloodGroup[position]);

        dec_Blood(Check_blood);
        vBloodGroup[position] = s4;
        Check_blood = Check_BloodGroup(s4);
        inc_Blood(Check_blood);
      }
      else{
        vEmail.push_back(s2);
        vBloodGroup.push_back(s4);
        vAge.push_back(s5);
        v1.insert(s5);
        Check_blood = Check_BloodGroup(s4);
        inc_Blood(Check_blood);
      }
    }
  }

  // int ap = 0;
  // int am = 0;
  // int abp = 0;
  // int abm = 0;
  // int bp = 0;
  // int bm = 0;
  // int op = 0;
  // int om = 0;

  //outputs
  cout<<"A+ "<<ap<<endl;
  cout<<"A- "<<am<<endl;
  cout<<"AB+ "<<abp<<endl;
  cout<<"AB- "<<abm<<endl;
  cout<<"B+ "<<bp<<endl;
  cout<<"B- "<<bm<<endl;
  cout<<"O+ "<<op<<endl;
  cout<<"O- "<<om<<endl;

  // std::vector v11( v1.begin(), v1.end());
  vector<string> v11(v1.begin(), v1.end());

  for(int i=0; i<v1.size(); i++){
    int freq = std::count(vAge.begin(), vAge.end(), v11[i]);
    cout<< v11[i] <<" "<<freq <<endl;
  }



}

int main(int argc, char const *argv[])
{
   optimize();
   solve();
   return 0;
}
