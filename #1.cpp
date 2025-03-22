#include <bits/stdc++.h>
using namespace std;
using ll = long long;
    
const int N = 1000;

int main() {
    ll s = 0;
    for (int i = 0; i < N; i++) {
        if (!(i % 3 && i % 5)) s += i;
    }
    cout << s << endl;
}   
