#include <bits/stdc++.h>
using namespace std;
using ll = long long;
    
const int N = 4e6;

int main() {
    vector<int> fib = {1, 2};
    ll s = 0;
    while (fib.back() < N) {
        if (fib.back() % 2 == 0) s += fib.back();
        fib.push_back(fib.back() + fib[fib.size() - 2]);
    }

    cout << s << endl;
}   
