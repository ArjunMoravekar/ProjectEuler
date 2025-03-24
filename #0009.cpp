#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1000;

int main() {
    for (int a = 1; a <= N; a++) {
        for (int b = a; b <= N; b++) {
            int cc = a * a + b * b;
            int c = sqrt(cc);
            if (c * c == cc) {
                if (a + b + c == 1000) cout << a * b * c << endl;
            }
        }
    }    
}   
