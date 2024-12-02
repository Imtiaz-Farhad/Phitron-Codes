#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    int n = a.size(), k = b.size();

    vector<int> countA(26, 0), countB(26, 0);

    for (char c : b) {
        countB[c - 'a']++;
    }

    for (int i = 0; i < k; i++) {
        countA[a[i] - 'a']++;
    }

    int cnt = 0;
    if (countA == countB) cnt++;


    for (int i = k; i < n; i++) {

        countA[a[i] - 'a']++;
        countA[a[i - k] - 'a']--;

        if (countA == countB) cnt++;
    }

    cout << cnt;
    return 0;
}
