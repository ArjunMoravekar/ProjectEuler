#include <bits/stdc++.h>
using namespace std;
using ll = long long;
    
const int N = 1e6, M = 10001;
vector<int> spf(N);

int main() {

    int cnt = 0;
    for (int i = 2; i <= N; i++) {
        if (spf[i]) continue;
        cnt++;
        if (cnt == M) {
            cout << i << endl;
            return 0;
        }
        for (int j = i; j <= N; j += i) {
            spf[j] = i;       
        }
    }    
}   
