#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 20;

int main() {
        
    int ans = 1;
    for (int i = 1; i <= N; i++) {
        if (ans % i) {
            ans /= __gcd(ans, i);
            ans *= i;
        }
    }

    cout << ans << endl;
}   
