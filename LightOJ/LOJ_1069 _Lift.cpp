#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

void TowerOfHanoi(int n, string from_tower, string to_tower, string aux_tower)
{
    if (n == 1)
    {
    cout << "Move disk 1 from rod " << from_tower <<  " to rod " << to_tower<<endl;
    return;
    }
    TowerOfHanoi(n - 1, from_tower, aux_tower, to_tower);
    cout << "Move disk " << n << " from rod " << from_tower << " to rod " << to_tower << endl;
    TowerOfHanoi(n - 1, aux_tower, to_tower, from_tower);

}
int OfHanoi(int n,int m,int k)
{

}
int main()
{
    int n = 3; // Number of disks
    TowerOfHanoi(n, 64, 2);  //names of the towers
    return 0;
}
