#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1000;

int main() {
    std::map<int, std::string> mp = {
        {0, ""}, {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"},
        {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}, {10, "ten"},
        {11, "eleven"}, {12, "twelve"}, {13, "thirteen"}, {14, "fourteen"}, {15, "fifteen"},
        {16, "sixteen"}, {17, "seventeen"}, {18, "eighteen"}, {19, "nineteen"},
        {20, "twenty"}, {30, "thirty"}, {40, "forty"}, {50, "fifty"},
        {60, "sixty"}, {70, "seventy"}, {80, "eighty"}, {90, "ninety"}
    };

    int ans = 0;
    for (int i = 1; i < N; i++) {
        int j = i, res = 0;
        if (i >= 100) {
            j = i % 100;
            //hundred = 7, and = 3
            res += 7 + mp[i / 100].size();
            if (j) res += 3;
        }   
        if (j >= 20) res += mp[j % 10].size() + mp[j / 10 * 10].size();
        else res += mp[j].size();
        ans += res;
    }   

    //thousand = 8, one = 3
    cout << ans + 3 + 8 << endl;
}   
