#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string n;
    cin >> n;
    if ((n[0] == n[1] & n[1] == n[2]) | (n[1] == n[2] & n[2] == n[3]))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}