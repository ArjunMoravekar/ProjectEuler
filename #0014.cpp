#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e6;

int main() {
    
    auto step = [&](ll u) -> ll {
        if (u & 1) return 3 * u + 1;
        return u / 2;
    };

    auto dfs = [&](ll u, auto&& dfs) -> ll {
        if (u == 1) return 0;
        return dfs(step(u), dfs) + 1;
    };

    int ans = 0, best = 0;
    for (int i = 1; i < N; i++) {
        ll curr = dfs(i, dfs);
        if (best <= curr) {
            best = curr;
            ans = i;            
        }
    }   

    cout << ans << endl;
}   
