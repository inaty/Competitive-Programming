#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int k, s;
    cin >> k >> s;

    int answer = 0;
    for (int x = 0; x <= k; x++)
    {
        for (int y = 0; y <= k; y++)
        {
            int z = s - x - y;
            if ((z >= 0) & (z <= k))
            {
                answer++;
            } 
        }
    }
    cout << answer << endl;
}