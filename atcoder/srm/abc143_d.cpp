#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int n;
    cin >> n;
    vector<int> l(n);
    rep(i, n) cin >> l.at(i);

    sort(l.begin(), l.end());

    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        for (int ii = i + 1; ii < n; ii++)
        {
            int iii_max = lower_bound(l.begin(), l.end(), l.at(i) + l.at(ii)) - l.begin();
            answer += max(0, iii_max - (ii + 1));
        }
    }

    cout << answer << endl;
}