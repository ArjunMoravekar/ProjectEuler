#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 100;

int main() {

    ll s = 0, S = 0;
    for (int i = 0; i <= N; i++) {
        s += i * i, S += i;
    }    

    S *= S;
    cout << S - s << endl;
}
