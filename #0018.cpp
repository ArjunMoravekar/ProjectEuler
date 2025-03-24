#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 15;

int main() {
    vector<vector<int>> a(N, vector<int> (N)), f(N, vector<int> (N));
    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> a[i][j];
            f[i][j] = a[i][j];
            if (i > 0) f[i][j] = max(f[i][j], f[i - 1][j] + a[i][j]);
            if (i > 0 && j > 0) f[i][j] = max(f[i][j], f[i - 1][j - 1] + a[i][j]);
            ans = max(ans, f[i][j]);
        }
    }
    cout << ans << endl;
}   
