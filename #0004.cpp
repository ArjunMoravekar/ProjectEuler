#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1000;

int main() {
    auto chk = [&](int L) -> bool {
        bool res = true;
        vector<int> v;
        while (L) v.push_back(L % 10), L /= 10;
        for (int i = 0; i < v.size() / 2; i++) {
            if (v[i] != v[v.size() - i - 1]) res = false;
        }
        return res;
    };  

    int ans = 0;
    for (int i = N / 10; i < N; i++) {
        for (int j = N / 10; j < N; j++) {
            if (chk(i * j)) ans = max(ans, i * j);
        }
    }

    cout << ans << endl;
}   
