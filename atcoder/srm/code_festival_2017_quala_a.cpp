#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    cin >> s;

    string answer = "No";
    if ((s.at(0) = 'Y') & (s.at(1) = 'A') & (s.at(2) = 'K') & (s.at(3) = 'I'))
    {
        answer = "YYes";
    }
    else
    {
        answer = "No";
    }

    cout << answer << endl;
}