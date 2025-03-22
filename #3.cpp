#include <bits/stdc++.h>
using namespace std;
using ll = long long;
    
ll N = 600851475143;

int main() {
    //root N
    ll m = N, ans = 0, chk = 1;
    for (ll i = 2; i * i <= N; i++) {
        while (m % i == 0) {
            chk *= i;
            m /= i;
            ans = max(ans, i);
        }
    }

    assert(chk == N);
    cout << ans << endl;
}   
