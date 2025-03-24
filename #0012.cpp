#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e6, M = 500;
vector<int> spf(N);


int main() {
    
    map<int, int> curr, next, tot;

    for (int i = 2; i < N; i++) {
        if (spf[i]) continue;
        else spf[i] = i;
        for (int j = i; j < N; j += i) {
            if (spf[i]) spf[j] = i;
        }    
    }   

    // curr = 1, next = 2;
    next[2] = 1;
    for (int i = 3; i < N; i++) {
        curr = next;
        next.clear(), tot.clear();
        int j = i;
        while (j != 1) {
            next[spf[j]]++;
            j /= spf[j];
        }

        for (auto [x, y] : curr) tot[x] += y;
        for (auto [x, y] : next) tot[x] += y;
        
        tot[2]--;
        int cnt = 1;
        for (auto [x, y] : tot) cnt *= (y + 1);
        if (cnt > M) {
            cout << i * (i - 1) / 2 << endl;
            return 0;
        }
    }
    assert(false);
}   
