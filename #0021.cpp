#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 10000;

int main() {
    
    int ans = 0;
    set<pair<int, int>> s;
    auto d = [&](int n) {
        int res = 0;
        for (int j = 1; j * j <= n; j++) {
            if (n % j == 0) {
                res += j + n / j;
            }
        }
        res -= n;

        if (s.contains({res, n})) return res + n;
        s.insert({n, res});
        return 0;
    };

    for (int i = 1; i <= N; i++) ans += d(i);
    cout << ans << endl;
}   
