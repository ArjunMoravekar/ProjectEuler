#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2'000'000;
vector<int> spf(N);

int main() {
    ll s = 0;
    for (int i = 2; i < N; i++) {
        if (spf[i]) continue;
        s += i;
        for (int j = i; j < N; j+=i) {
            spf[j] = i;
        }
    } 

    cout << s << endl;   
}   
