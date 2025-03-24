#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 20, M = 4;

int main() {
    vector<vector<ll>> g(N, vector<ll> (N));

    // give the input
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> g[i][j];
        }
    }    

    ll s = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            //down
            if (i + M - 1 < N) {
                s = max(s, g[i][j] * g[i + 1][j] * g[i + 2][j] * g[i + 3][j]);
            } 
            //right 
            if (j + M - 1 < N) {
                s = max(s, g[i][j] * g[i][j + 1] * g[i][j + 2] * g[i][j + 3]);
            } 
            //diag
            if (i + M - 1 < N && j + M - 1 < N) {
                s = max(s, g[i][j] * g[i + 1][j + 1] * g[i + 2][j + 2] * g[i + 3][j + 3]);
            }
            if (i + M - 1 < N && j - M + 1 > 0) {
                s = max(s, g[i][j] * g[i + 1][j - 1] * g[i + 2][j - 2] * g[i + 3][j - 3]);
            }
        }
    }

    cout << s << endl;
}   
