#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int l, a, b, c, d;
    cin >> l;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    cout << max(0, l - max((a + c - 1) / c, (b + d - 1) / d)) << endl;
}