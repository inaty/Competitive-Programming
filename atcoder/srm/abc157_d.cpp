#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m), b(m);
    rep(i, m) cin >> a.at(i) >> b.at(i);
    vector<int> c(k), d(k);
    rep(i, k) cin >> c.at(i) >> d.at(i);

    
}